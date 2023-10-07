homework = input().split(";")

flattened_homework = []

for problem in homework:
    if "-" in problem:
        start, end = map(int, problem.split("-"))
        # Add the range of problems to the flattened list
        flattened_homework.extend(range(start, end + 1))
    else:
        flattened_homework.append(int(problem))

print(len(flattened_homework))
