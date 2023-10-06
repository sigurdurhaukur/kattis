n = int(input())
s = input()  # binary string
t = input()  # binary string

# xor s and t
s = int(s, 2)
t = int(t, 2)
x = s ^ t

# print x in binary
print(bin(x)[2:].zfill(n))
