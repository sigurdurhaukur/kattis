a = int(input())
b = int(input())
c = int(input())

name = ["Monnei", "Fjee", "Dolladollabilljoll"]
fee = [a, b, c]

# get the index of the minimum value
index = fee.index(min(fee))

# the name of the company with the lowest fee
print(name[index])
