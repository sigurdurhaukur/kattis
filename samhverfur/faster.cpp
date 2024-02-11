#include <algorithm>
#include <iostream>
#include <limits>  // Include for numeric limits
#include <vector>
using namespace std;

long long createPalindrome(long long input, int b, bool isOdd) {
  long long n = input;
  long long palin = input;

  if (isOdd)
    n /= b;

  while (n > 0) {
    palin = palin * b + (n % b);
    n /= b;
  }
  return palin;
}

void generatePalindromes(long long n, vector<long long>& palindromes) {
  long long number;

  for (int j = 0; j < 2; j++) {
    long long i = 1;
    while ((number = createPalindrome(i, 10, j % 2)) < n) {
      palindromes.push_back(number);
      i++;
    }
  }
}

int main() {
  //   long long n = numeric_limits<long long>::max();  // Largest possible
  //   value

  // number of k's
  //   int nK = 1000;
  long long n = 1LL << 60;
  vector<long long> palindromes;
  generatePalindromes(n, palindromes);

  sort(palindromes.begin(), palindromes.end());

  int k = 1;
  long long prev = 0;
  for (long long num : palindromes) {
    while (num >= (1LL << k)) {
      cout << k << " " << prev << endl;
      k++;
    }
    prev = num;
  }

  return 0;
}
