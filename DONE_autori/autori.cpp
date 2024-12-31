#include <iostream>

using namespace std;

int main() {
  string s;

  cin >> s;
  cout << s[0];

  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == '-') {
      cout << s[i + 1];
    }
  }
  cout << endl;

  return 0;
}
