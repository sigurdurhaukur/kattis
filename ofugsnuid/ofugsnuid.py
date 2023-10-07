N = int(input())

numbers = []
for i in range(N):
    numbers.append(int(input()))

# reverse the list
numbers.reverse()

for number in numbers:
    print(number)
