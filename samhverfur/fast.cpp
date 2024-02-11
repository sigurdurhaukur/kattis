#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n) {
  string str = to_string(n);
  int len = str.length();
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - 1 - i])
      return false;
  }
  return true;
}

int main() {
  int n = 100;

  // for (int i = 1; i < n; i++) {
  //   if (isPalindrome(i)) {
  //     cout << i << endl;
  //   }
  // }

  int k = 1;
  int previus = 0;
  int i = 1;
  while (k < 100) {
    if (isPalindrome(i)) {
      if (i > pow(2, k)) {
        cout << k << " " << previus << endl;
        k++;
      }
      previus = i;
    }
    i++;
  }

  // for (int i = 1; i < 100; i++) {
  //   if (isPalindrome(i)) {
  //     if (i > pow(2, k)) {
  //       cout << k << " " << previus << endl;
  //       k++;
  //     }
  //     previus = i;
  //   }
  // }
  return 0;
}
