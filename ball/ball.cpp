#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  n = n / 2 + 1;

  vector<int> a(n);
  vector<int> b(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  int added_pair_a = -1, added_pair_b = -1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i] == a[j]) {
        if (added_pair_b == -1) {
          added_pair_b = b[i];
        }
        added_pair_a = a[i];
      }
      if (b[i] == b[j]) {
        if (added_pair_a == -1) {
          added_pair_a = a[i];
        }
        added_pair_b = b[i];
      }
    }
  }

  if (added_pair_a < added_pair_b) {
    cout << added_pair_a << " " << added_pair_b << endl;
  } else {
    cout << added_pair_b << " " << added_pair_a << endl;
  }

  return 0;
}
