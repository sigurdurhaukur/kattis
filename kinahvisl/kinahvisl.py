starting_word = input()
final_word = input()

n_differences = 0
for i in range(len(starting_word)):
    if starting_word[i] != final_word[i]:
        n_differences += 1

n_players = n_differences + 1

print(n_players)
