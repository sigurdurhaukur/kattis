n_classrooms, n_sanitizers = map(int, input().split())


classrooms = []  # how many sanitizers are needed in each classroom
for i in range(n_classrooms):
    classrooms.append(int(input()))


total_sanitizers_needed = sum(classrooms)

if total_sanitizers_needed > n_sanitizers:
    print("Neibb")
else:
    print("Jebb")
