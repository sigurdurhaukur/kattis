n_guests = int(input())


class Guest:
    def __init__(self, name, value_of_present):
        self.name = name
        self.value_of_present = value_of_present

    def __repr__(self):
        return self.name


guests = []


for guest in range(n_guests):
    guest_data = input().split()
    guest_name = guest_data[0]
    value_of_present = int(guest_data[1])

    guest = Guest(guest_name, value_of_present)

    guests.append(guest)


# find guest with the most valued present

best_guest = max(guests, key=lambda guest: guest.value_of_present)
print(best_guest.name)
