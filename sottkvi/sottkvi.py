n_friends, days_to_birthday, current_day = [int(x) for x in input().split()]


class Friend:
    def __init__(self, beginning_of_quarantine):
        duration_of_quarantine = 14  # days
        self.beginning_of_quarantine = beginning_of_quarantine
        self.end_of_quarantine = beginning_of_quarantine + duration_of_quarantine

    def is_in_quarantine(self, day):
        if self.beginning_of_quarantine <= day <= self.end_of_quarantine:
            return True
        else:
            return False


friends = []
for _ in range(n_friends):
    beginning_of_quarantine = int(input())
    friend = Friend(beginning_of_quarantine)
    friends.append(friend)

birthday_day = current_day + days_to_birthday
# filter out friends who are in quarantine on the birthday
friends = [
    friend
    for friend in friends
    if not friend.is_in_quarantine(birthday_day)
    or friend.end_of_quarantine == birthday_day
]

# amount of friends which can attend the birthday
print(len(friends))
