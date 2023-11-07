#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, m;
  cin >> n;
  cin >> m;

  if (n == 0) {
    cout << "Jebb" << endl;
  } else if (m == 2 && n == 2) {
    cout << "Jebb" << endl;
  } else {
    cout << "Neibb" << endl;
  }

  return 0;
}