
a = int(input())
b = int(input())
c = int(input())

determinant = b**2 - 4*a*c

n_real_roots = 0

if determinant > 0:
    n_real_roots = 2

elif determinant == 0:
    n_real_roots = 1

print(n_real_roots)
