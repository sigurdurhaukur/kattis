
#include <algorithm>
#include <iostream>

using namespace std;

// handle winning round early is missing
int main() {
  int N;
  string s;
  cin >> N;
  cin >> s;

  int amount_of_h = count(s.begin(), s.end(), 'H');
  int amount_of_a = count(s.begin(), s.end(), 'A');

  if (amount_of_h > amount_of_a) {
    cout << "Arnar" << endl;
  } else if (amount_of_a > amount_of_h) {
    cout << "Hannes" << endl;
  }

  return 0;
}
