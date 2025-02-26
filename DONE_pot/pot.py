
n = int(input())

sum = 0
for i in range(n):
    num = input()
    exp = int(num[-1])
    num = int(num[:-1])

    sum += num ** exp

print(sum)

