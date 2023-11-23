#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  string line;
  cin >> line;

  // Split line on spaces
  istringstream iss(line);
  vector<string> tokens;
  string token;
  while (getline(iss, token, ' ')) {
    tokens.push_back(token);
  }

  // Print the tokens
  for (const string& t : tokens) {
    cout << t << endl;
  }

  return 0;
}