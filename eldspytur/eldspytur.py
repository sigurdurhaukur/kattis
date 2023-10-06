n_matches, max_matches_allowed_to_remove = map(int, input().split())

# Ben and Jerry are the players
n_players = 2


# Ben always starts


def get_winner(n_matches, max_matches_allowed_to_remove):
    # If the number of matches is divisible by the number of matches allowed to remove + 1
    # then Ben will win
    if n_matches % (max_matches_allowed_to_remove + 1) == 0:
        return "Neibb"
    else:
        return "Jebb"


print(get_winner(n_matches, max_matches_allowed_to_remove))
