
x = int(input())
n = int(input())

leftover = 0
for i in range(n):
    leftover += x - int(input())

print(leftover)
