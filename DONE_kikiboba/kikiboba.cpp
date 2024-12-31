#include <iostream>

using namespace std;

int main() {
  string name;
  cin >> name;

  int k = 0;
  int b = 0;

  for (int i = 0; i < name.length(); i++) {
    if (name[i] == 'k') {
      k++;
    }

    if (name[i] == 'b') {
      b++;
    }
  }

  if (k > b) {
    cout << "kiki";
  } else if (k < b) {
    cout << "boba";
  } else if (k == b && (k > 0 && b > 0)) {
    cout << "boki";
  } else {
    cout << "none";
  }

  cout << endl;

  return 0;
}
