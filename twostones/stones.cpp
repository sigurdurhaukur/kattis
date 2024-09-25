// https://open.kattis.com/problems/twostones

#include <iostream>
#include <string>
using namespace std;

int main() {
  string winner = "Alice";
  int n;

  cin >> n;

  if (n % 2 == 0) {
    winner = "Bob";
  }

  cout << winner << endl;

  return 0;
}
