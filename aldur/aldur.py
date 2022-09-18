# https://iceland.kattis.com/problems/iceland.aldur

amount_of_friends = int(input())

age_of_friends = []
for _ in range(amount_of_friends):
    age_of_friends.append(int(input()))

youngest_friend = min(age_of_friends)
print(youngest_friend)  