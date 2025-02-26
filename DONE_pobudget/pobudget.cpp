#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  string temp;
  int budget = 0;
  int x = 0;
  for (int i = 0; i < n; i++) {
    cin >> temp;

    cin >> x;

    budget += x;
  }

  if (budget > 0) {
    cout << "Usch, vinst";
  } else if (budget == 0) {
    cout << "Lagom";
  } else {
    cout << "Nekad";
  }

  cout << endl;

  return 0;
}
