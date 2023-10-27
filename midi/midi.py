n_tickets = int(input())


tickets = []
for _ in range(n_tickets):
    name = input()
    # reverse the name
    name = name[::-1]

    # add to beginning of list
    tickets.insert(0, name)


message = "".join(tickets)
print(message)
