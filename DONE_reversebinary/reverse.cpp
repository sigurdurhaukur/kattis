// https://open.kattis.com/problems/reversebinary
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  // Convert N to binary
  int binary[32];
  int i = 0;
  while (N > 0) {
    binary[i] = N % 2;
    N = N / 2;
    i++;
  }

  // reverse binary
  int reversed = 0;
  for (int j = 0; j < i; j++) {
    reversed = reversed * 2 + binary[j];
  }

  // decimal of reversed binary
  cout << reversed << endl;

  return 0;
}
