name = input()
N = int(input())


class Submition:
    def __init__(self, name, score, time):
        self.name = name
        self.score = score
        self.time = time


submitions = []

for i in range(N):
    input_line = input()
    time, problem_name, score = input_line.split()

    submitions.append(Submition(problem_name, int(score), int(time)))


def calculate_score(submitions):
    # filter by name
    submitions = list(filter(lambda x: x.name == name, submitions))

    # handle case when no submitions are found
    if not submitions:
        return 0

    # sort by max score
    submitions = sorted(submitions, key=lambda x: x.score, reverse=True)

    # get max score
    max_score = submitions[0].score

    return max_score


print(calculate_score(submitions))
