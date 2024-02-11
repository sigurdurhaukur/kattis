#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void generatePalindromes(int maxDigits, vector<string>& palindromes) {
  for (int digits = 1; digits <= maxDigits; ++digits) {
    int half = (digits + 1) / 2;
    for (int num = pow(10, half - 1); num < pow(10, half); ++num) {
      string leftPart = to_string(num);
      string rightPart = leftPart.substr(0, digits / 2);
      reverse(rightPart.begin(), rightPart.end());
      palindromes.push_back(
          leftPart + (digits % 2 == 0 ? rightPart : rightPart.substr(1)));
    }
  }
}

int main() {
  vector<string> palindromes;
  generatePalindromes(5, palindromes);

  for (const string& p : palindromes) {
    cout << p << endl;
  }

  return 0;
}
