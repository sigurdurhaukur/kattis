N, amount_of_rows, amount_of_chairs = map(int, input().split())


classroom = []

for _ in range(amount_of_rows):
    row_of_students = input().split()
    classroom.append(row_of_students)


attendance = []
for _ in range(N):
    attendance.append(input())


def chunk_list(lst, r):
    return [lst[i : i + r] for i in range(0, len(lst), r)]


attendance = chunk_list(attendance, amount_of_chairs)

# check which direction
for i in range(len(classroom)):
    if classroom[i] == attendance[i]:
        print("left")
    else:
        print("right")
