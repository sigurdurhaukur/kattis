n_products = int(input())

total_price = 0

for i in range(n_products):
    price = int(input())
    total_price += price

print(total_price)
