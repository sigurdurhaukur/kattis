#include <cmath>
#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  // long long k = floor(sqrt(n));
  long long k = 1;

  // Find the largest power of 2 that is less than or equal to 'n'
  while (k <= n) {
    k <<= 1;
  }
  k >>= 1;

  // Calculate 'final' using a simplified expression
  long long final = (n - k) * 2 + 1;

  cout << final << endl;
}
