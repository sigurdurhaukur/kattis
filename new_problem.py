import bs4
import sys
import requests
import os
from markdownify import markdownify


class Kattis:
    def __init__(self, url):
        self.url = url
        self.name = self.get_name_from_url()
        self.description = ""
        self.file_extension = ".cpp"

        try:
            self.get_problem_data()
        except Exception as e:
            raise Exception(f"Error getting problem data from URL: {url}\n{str(e)}")

    def get_problem_data(self):
        response = requests.get(self.url)

        # check if response is valid
        if response.status_code != 200:
            raise Exception(f"Error getting problem data from URL: {self.url}")

        # get html from response
        html = bs4.BeautifulSoup(response.text, "html.parser")

        pure_html = html.find("div", {"class": "problembody"})

        # convert html to markdown
        if pure_html:
            self.markdown_content = markdownify(str(pure_html))
        else:
            raise Exception(f"No article found in HTML for URL: {self.url}")

    def get_name_from_url(self):
        # get the last part of the url
        names = self.url.split("/")

        name = names[-1]
        name = name.replace("iceland.", "")

        if name == "en":
            name = names[-2]

        return name

    def setup_problem(self):
        # create folder for problem
        if not os.path.exists(self.name):
            os.mkdir(self.name)
        else:
            raise Exception("Problem folder already exists")

        # create readme file
        with open(f"{self.name}/{self.name}.md", "w", encoding="utf-8") as f:
            f.write(self.markdown_content)

        # create solution file
        with open(f"{self.name}/{self.name}{self.file_extension}", "w") as f:
            f.write("")

        if (self.file_extension == ".cpp"):
            with open(f"{self.name}/run.sh", "w") as f:
                script = f"#!/bin/bash\ng++ -std=c++17 {self.name}.cpp -o {self.name}.out\n./{self.name}.out\n"
                f.write(script)

        print(f"New problem created:\n cd ./{self.name}")

        # create and open tmux session
        os.system(f"tmux new-session -d -s {self.name}")
        os.system(f"tmux send-keys -t {self.name} 'cd {self.name}' Enter")
        os.system(f"tmux attach-session -t {self.name}")


        print(f"tmux session created: {self.name}")

        is_done = input("Are you done? (y/N) ")
        if is_done.lower() == "y":

            # rename folder to DONE_{name}
            os.rename(self.name, f"DONE_{self.name}")

        os.system(f"tmux kill-session -t {self.name}")
        print(f"tmux session killed: {self.name}")

    def __str__(self) -> str:
        return self.markdown_content


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python3 script.py <Kattis_URL>")
        sys.exit(1)

    url = sys.argv[1]

    kattis = Kattis(url)

    file_extension = input("What file extension (.cpp /.py) ")
    kattis.file_extension = file_extension

    kattis.setup_problem()
