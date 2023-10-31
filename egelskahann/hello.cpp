#include <cmath>
#include <iostream>
using namespace std;

int msbPos(int n) {
  int pos = 0;
  while (n != 0) {
    pos++;
    n = n >> 1;
  }
  return pos;
}

int josephify(int n) {
  int position = msbPos(n);

  int j = 1 << (position - 1);
  n = n ^ j;
  n = n << 1;
  n = n | 1;

  return n;
}

int main() {
  int n;
  cin >> n;
  cout << josephify(n) << '\n';
  return 0;
}
