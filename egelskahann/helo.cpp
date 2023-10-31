#include <iostream>
using namespace std;

long long josephify(int n) {
  if (n == 1) {
    return 1;
  }

  // Calculate the position of the Most Significant Bit (MSB) using integer
  // arithmetic
  int pos = 0;
  int tempN = n;
  while (tempN > 0) {
    tempN >>= 1;
    pos++;
  }

  // Calculate 'l' using integer arithmetic
  long long l = n - (1LL << (pos - 1));

  // Calculate 'ans' using integer arithmetic
  long long ans = 2 * l + 1;

  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << josephify(n) << '\n';
  return 0;
}
