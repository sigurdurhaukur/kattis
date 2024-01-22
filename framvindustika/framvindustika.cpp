#include <iostream>
#include <string>

using namespace std;

int main() {
  int percentage, width;

  cin >> percentage >> width;

  string bar = "[";
  string n2 = to_string(percentage);

  int nhash = percentage * width / 100;

  for (int i = 0; i < nhash; i++) {
    bar += '#';
  }

  int nrest = width - nhash;
  for (int i = 0; i < nrest; i++) {
    bar += '-';
  }

  bar += ']';
  bar += ' ';
  bar += '|';

  // right align
  if (percentage < 10) {
    bar += "   ";
    bar += n2;
    bar += '%';
  } else if (percentage == 100) {
    bar += ' ';
    bar += n2;
    bar += '%';
  } else {
    bar += "  ";
    bar += n2;
    bar += '%';
  }
  cout << bar << endl;
}