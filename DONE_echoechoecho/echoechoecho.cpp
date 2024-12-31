#include <iostream>

using namespace std;

int main() {
  string echo;

  cin >> echo;
  for (int i = 0; i < 3 - 1; i++) {
    cout << echo << " ";
  }
  cout << echo << endl;

  return 0;
}
