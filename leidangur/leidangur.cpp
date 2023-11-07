#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool handle_bad_guys(vector<char>& backpack, char item) {
  char lower = tolower(item);
  int index_of_money =
      find(backpack.begin(), backpack.end(), lower) - backpack.begin();

  if (index_of_money != backpack.size()) {
    // erase everything from the beginning to the index of the money to the
    // end
    backpack.erase(backpack.begin() + index_of_money, backpack.end());
    return true;
  } else {
    return false;
  }
}

int main() {
  string journey;
  cin >> journey;
  vector<char> backpack;

  int money = 0;
  int gold = 0;
  int jewels = 0;

  //   pick up items from the journey
  for (char item : journey) {
    backpack.push_back(item);

    if (item == 'P' || item == 'G' || item == 'O') {
      bool can_handle = handle_bad_guys(backpack, item);

      if (!can_handle) {
        cout << "Neibb" << endl;
        return 0;
      }
    }
  }

  for (char item : backpack) {
    if (item == 'p') {
      money++;
    } else if (item == 'g') {
      gold++;
    } else if (item == 'o') {
      jewels++;
    }
  }

  cout << money << endl << gold << endl << jewels << endl;

  return 0;
}