#include <iostream>
#include <vector>

using namespace std;

class Player {
 public:
  int min;
  int max;
  int elo;

  Player(int min, int max, int elo) {
    this->min = min;
    this->max = max;
    this->elo = elo;
  };

  bool isInRange(int elo) { return elo >= this->min && elo <= this->max; };

  int getElo() { return this->elo; };
};

int main() {
  int n, initial_elo;
  cin >> initial_elo >> n;

  vector<Player> players;

  // collect input
  for (int i = 0; i < n; i++) {
    int min, max, score;
    cin >> min >> max >> score;

    Player player(min, max, score);
    players.push_back(player);
  }

  return 0;
}