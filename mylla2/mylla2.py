def position_to_winner(position):
    if position == "XXX":
        return "X"
    elif position == "OOO":
        return "O"
    else:
        return None


def who_won(position):
    # Check rows
    for row in position:
        winner = position_to_winner(row)
        if winner:
            return winner

    # Check columns
    for i in range(len(position[0])):
        column = ""
        for j in range(len(position)):
            column += position[j][i]
        winner = position_to_winner(column)
        if winner:
            return winner

    # Check diagonals
    diagonal = ""
    for i in range(len(position)):
        diagonal += position[i][i]

    winner = position_to_winner(diagonal)
    if winner:
        return winner

    # Check other diagonal
    diagonal = ""
    for i in range(len(position)):
        diagonal += position[i][len(position) - 1 - i]

    winner = position_to_winner(diagonal)
    if winner:
        return winner

    return "TIE"


first_row = input()
second_row = input()
third_row = input()

tic_tac_toe = [first_row, second_row, third_row]

winner = who_won(tic_tac_toe)

if winner == "X":
    print("Neibb")
elif winner == "O":
    print("Jebb")
elif winner == "TIE":
    print("Neibb")
else:
    print("error")
