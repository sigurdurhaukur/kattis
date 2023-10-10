n = int(input())
s = input()

rounds_to_win = 5  # Total number of games in a round

hannes_points = 0
arnar_points = 0

hannes_rounds_won = 0
arnar_rounds_won = 0

for winner in s:
    if winner == "H":
        hannes_points += 1
    elif winner == "A":
        arnar_points += 1

    # Check if a round is finished
    if hannes_points + arnar_points >= rounds_to_win:
        if hannes_points > arnar_points:
            hannes_rounds_won += 1
        elif arnar_points > hannes_points:
            arnar_rounds_won += 1

        # Reset points for the next round
        hannes_points = 0
        arnar_points = 0

    # Check if a player has won the game
    if hannes_rounds_won >= n:
        print("Hannes")
        break
    elif arnar_rounds_won >= n:
        print("Arnar")
        break
