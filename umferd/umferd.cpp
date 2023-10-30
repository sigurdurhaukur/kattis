
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int m;
  int n;
  cin >> m;
  cin >> n;

  int total_dots = 0;

  for (int i = 0; i < n; i++) {
    string road;
    cin >> road;

    total_dots += count(road.begin(), road.end(), '.');
  }

  //   cout << total_dots << endl;
  //   cout << m * n << endl;
  float ratio = static_cast<float>(total_dots) / (m * n);

  cout << ratio << endl;

  return 0;
}