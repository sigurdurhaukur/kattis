#include <iostream>

using namespace std;
int main() {
  int N;

  cin >> N;

  int sum = 0;
  int temp = 0;
  for (int i = 0; i < N; i++) {
    cin >> temp;
    sum += temp;
    temp = 0;
  }

  cout << sum << endl;

  return 0;
}
