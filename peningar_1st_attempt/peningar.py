def collect_coins(n, k, coin_values):
    # Initialize total money collected
    total_money = 0

    # Initialize the starting point
    index = 0

    # List to keep track of removed coins
    removed = [False] * n

    # Iterate until we can no longer skip k-1 coins
    while True:
        # Add the value of the current coin
        total_money += coin_values[index]
        removed[index] = True

        # Check for available steps
        steps_available = 0
        for _ in range(k):
            # Move the pointer k steps forward, wrapping around the circle
            index = (index + 1) % n
            if not removed[index]:
                steps_available += 1

        # Break the loop if we can't skip k-1 coins
        if steps_available < k:
            break

    return total_money


# Input parsing
input_line = input().strip()  # For n and k
coin_values_line = input().strip()  # For coin values

n, k = map(int, input_line.split())
coin_values = list(map(int, coin_values_line.split()))

# Calculate the total money collected
total_collected = collect_coins(n, k, coin_values)

print(total_collected)
