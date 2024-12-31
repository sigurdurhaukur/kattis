
trouble = input()

trouble = trouble.split()

for i in range(len(trouble)):
    trouble[i] = int(trouble[i])

a = trouble[0]
b = trouble[1]
c = trouble[2]

if a + b == c:
    print("correct!")
else:
    print("wrong!")
