length = int(input())
k = [int(x) for x in input().split()]
k.sort()

third = length // 3

one_third = k[:third]
two_third = k[third : third * 2]
three_third = k[third * 2 :]

star_wars_order = two_third + one_third + three_third

star_wars_order = " ".join(str(x) for x in star_wars_order)

print(star_wars_order)
