#include <iostream>

using namespace std;

int main() {
  int n;
  string meat;
  string othermeat;

  cin >> n;
  cin >> meat;

  if (n == 1) {
    cout << meat;
  } else {
    cin >> othermeat;

    if (othermeat == meat) {
      cout << meat;
    } else {
      cout << "blandad best";
    }
  }

  return 0;
}
