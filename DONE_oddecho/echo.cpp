// https://open.kattis.com/problems/oddecho
#include <iostream>
#include <string>

using namespace std;

int main() {

  int N;
  cin >> N;

  string echo[N];
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;

    echo[i] = s;
  }

  for (int i = 0; i < N; i += 2) {
    cout << echo[i] << endl;
  }
}
