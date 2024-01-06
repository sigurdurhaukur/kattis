#include <iostream>
#include <string>

using namespace std;

string isVowel(char letter) {
  if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' ||
      letter == 'U') {
    return "Jebb";
  } else if (letter == 'Y') {
    return "Kannski";
  } else {
    return "Neibb";
  }
}

int main() {
  string letter;
  cin >> letter;

  cout << isVowel(letter[0]) << endl;

  return 0;
}
