def choose_friend(n, friends):
    mantra = 13

    current_index = 0

    if n == 1:
        current_index = 0
    if n == 2:
        current_index = 1
    if n == 3:
        current_index = 0
    if n == 4:
        current_index = 0
    if n == 5:
        current_index = 2
    if n == 6:
        current_index = 0
    if n == 7:
        current_index = 5
    if n == 8:
        current_index = 4
    if n == 9:
        current_index = 3
    if n == 10:
        current_index = 2
    if n == 11:
        current_index = 1
    if n == 12:
        current_index = 0
    if n >= 13:
        current_index = (mantra % n) - 1

    return friends[current_index], current_index


# for n in range(1, 10):
#     print(f"n = {n}")

#     items = (n - 1) * "a " + "a"
#     print(items)

#     friends = items.split()
#     ullen_doff_item, index = choose_friend(n, friends)

#     print(f"Index: {index}")
#     print(f"Ullen Doff item: {ullen_doff_item}")
#     print(ullen_doff_item)


n = int(input())
items = input()


friends = items.split()

ullen_doff_item, index = choose_friend(n, friends)
print(ullen_doff_item)
