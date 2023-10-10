n = int(input())  # points needed to win the round
s = input()  # the sequence of winner from games played


class Game:
    def __init__(self, players, games_per_round=5):
        self.players = players
        self.games_per_round = games_per_round
        self.rounds = []
        self.current_round = 0

    def play(self, winner):
        if winner == "H":
            name = "Hannes"
        elif winner == "A":
            name = "Arnar"

        the_winner = next(p for p in self.players if p.name == name)
        the_winner.add_point()

    def check_result(self, the_winner):
        if the_winner.won_round(self.games_per_round):
            self.rounds.append(the_winner)
            for p in self.players:
                p.reset()
            self.current_round += 1

    def get_winner(self):
        # count the number of rounds won by each player
        hannes_rounds = len([r for r in self.rounds if r.name == "Hannes"])
        arnar_rounds = len([r for r in self.rounds if r.name == "Arnar"])

        print(hannes_rounds, arnar_rounds)

        if hannes_rounds > arnar_rounds:
            return "Hannes"
        elif arnar_rounds > hannes_rounds:
            return "Arnar"
        else:
            return "Tie"


class Player:
    def __init__(self, name):
        self.name = name
        self.points = 0

    def add_point(self):
        self.points += 1

    def won_round(self, n):
        return self.points == n

    def reset(self):
        self.points = 0


hannes = Player("Hannes")
arnar = Player("Arnar")

game = Game([hannes, arnar])


for i in range(len(s) - 1):
    game.play(s[i])
    game.play(s[i + 1])

    game.check_result()

print(game.get_winner())
