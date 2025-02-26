#include <iostream>

using namespace std;

int main() {
  int n, sum;

  sum = 0;

  cin >> n;

  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    sum += x;
  }

  int avg = sum / n;

  cout << avg << endl;

  return 0;
}
