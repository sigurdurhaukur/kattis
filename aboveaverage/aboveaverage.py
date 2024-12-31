
n = int(input())

avreges = []
for i in range(n):
    grades = input()
    grades = [int(x) for x in grades.split()]

    n_students = grades[0]
    grades = grades[1:]

    average = sum(grades) / n_students

    n_students_above_average = 0
    for student in grades:
        if student > average:
            n_students_above_average += 1


    perc_students_above_avrg = f"{round((n_students_above_average / n_students) * 100, 3)}"
    perc_students_above_avrg = perc_students_above_avrg + (3 - len(perc_students_above_avrg.split(".")[1])) * "0" + "%"
    avreges.append(perc_students_above_avrg)


print("\n".join(avreges))
