
#include <iostream>
#include <string>

using namespace std;

// function
int sewing_stitch_to_length(char c) {
  int length = 0;

  // switch case
  switch (c) {
    case '.':
      length = 20;
      break;
    case '0':
      length = 10;
      break;
    case '\\':
      length = 25;
      break;
    case '/':
      length = 25;
      break;
    case 'A':
      length = 35;
      break;
    case '^':
      length = 5;
      break;
    case 'v':
      length = 22;
      break;
  }

  return length;
}

int main() {
  int y, x;
  cin >> y >> x;

  int total_length = 0;
  cin.ignore();
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      char c;
      cin >> c;

      total_length += sewing_stitch_to_length(c);
    }
  }

  cout << total_length << endl;

  return 0;
}