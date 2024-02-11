#include <cmath>
#include <iostream>
#include <string>

using namespace std;

string generatePalindrome(long long m, bool isOdd) {
  long long n = (isOdd ? (m - 1) / 2 : m / 2) + 1;  // Calculate n
  long long firstHalf = m - pow(10, n - 1);
  string palindrome = to_string(firstHalf);
  string secondHalf = palindrome.substr(
      0, isOdd ? palindrome.length() - 1 : palindrome.length());
  reverse(secondHalf.begin(), secondHalf.end());
  return palindrome + secondHalf;
}

int main() {
  // Example: Generate the first 100 palindromes for both odd and even lengths
  for (int i = 1; i <= 10; ++i) {
    cout << "Even: " << generatePalindrome(i, false) << ", ";
    cout << "Odd: " << generatePalindrome(i, true) << endl;
  }
  return 0;
}
