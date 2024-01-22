#include <iostream>
#include <string>

using namespace std;

int main() {
  char operation;
  int n_lines;

  cin >> operation;
  cin >> n_lines;

  string final_string;

  for (int i = 0; i < n_lines; i++) {
    if (operation == 'D') {
      // add
      string temp_string;
      string insert = "ub";

      // get string line
      getline(cin, temp_string);
      cin.ignore();

      for (char c : temp_string) {
        char character = tolower(c);
        if (character == 'a' || character == 'e' || character == 'i' ||
            character == 'o' || character == 'u' || character == 'y') {
          final_string += insert + c;
        } else {
          final_string += c;
        }
      }

    } else if (operation == 'A') {
      // remove
      string temp_string;
    } else {
      cout << "Invalid operation" << endl;
    }
  }

  cout << final_string << endl;

  return 0;
}