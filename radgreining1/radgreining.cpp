#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  cin.ignore();

  string full_dna(n, '?');

  for (int i = 0; i < m; i++) {
    string line;
    getline(cin, line);

    int s = stoi(line.substr(0, 1)) - 1;
    string k = line.substr(2);

    // cout << s << endl;
    // cout << k << endl;

    string match1 = full_dna.substr(s, k.length());

    // if (match1.find('?') != string::npos) {
    //   match1.erase(match1.find('?'), 1);
    //   cout << match1 << endl;
    // }

    full_dna.erase(s, k.length());
    full_dna.insert(s, k);
  }

  cout << full_dna << endl;

  return 0;
}