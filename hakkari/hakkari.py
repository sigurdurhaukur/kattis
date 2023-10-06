n, m = map(int, input().split())

mine = "*"

minefield = []
amount_of_mines = 0
for i in range(n):
    row = input()

    amount_of_mines += row.count(mine)

    # split row so that we can access each character
    row = list(row)
    minefield.append(row)


def get_coordinates_of_bomb(minefield):
    for x in range(len(minefield)):
        for y in range(len(minefield[0])):
            if minefield[x][y] == mine:
                coordinate = (x + 1, y + 1)
                yield f"{coordinate[0]} {coordinate[1]}"


# print solution
print(amount_of_mines)

coordinates = get_coordinates_of_bomb(minefield)
for coordinate in coordinates:
    print(coordinate)
