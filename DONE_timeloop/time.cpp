// https://open.kattis.com/problems/timeloop
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "Abracadabra";
  int n;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << i << " " << s << endl;
  }

  return 0;
}
