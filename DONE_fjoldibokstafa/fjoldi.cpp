// https://open.kattis.com/problems/fjoldibokstafa
#include <iostream>
#include <string>

using namespace std;

int main() {
  string input;
  getline(cin, input);

  // convert string to lowercase
  for (int i = 0; i < input.length(); i++) {
    input[i] = tolower(input[i]);
  }

  // count alphabet characters
  int count = 0;
  for (int i = 0; i < input.length(); i++) {
    if (input[i] >= 'a' && input[i] <= 'z') {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
