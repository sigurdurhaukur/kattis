# link to the problem https://open.kattis.com/problems/99problems

# the price of the product, to be transformed so that it ends in 99
price = int(input()) 

def solve(n=price): 
    """ basicly just solve the problem :) """

    if n % 100 >= 49: # round up
        result = n - (n%100) + 99
    elif n < 110:
        result = 99
    else: # round down
        result = price - (price%100) - 1
    return result

def bounds(n=price):
    """ returns True if in bounds"""
    n == n > 0 or n <= 10E4 # 0 < price <= 10^4 
    return n

price_in_bounds = bounds(price)
if price_in_bounds: 
    solution = solve(price)

print(solution)
