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
        name = self.url.split("/")[-1]

        name = name.replace("iceland.", "")
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
        with open(f"{self.name}/{self.name}.py", "w") as f:
            f.write("")

    def __str__(self) -> str:
        return self.markdown_content


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python3 script.py <Kattis_URL>")
        sys.exit(1)

    url = sys.argv[1]

    kattis = Kattis(url)

    kattis.setup_problem()
