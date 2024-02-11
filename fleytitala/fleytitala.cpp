#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  long long distance;
  long long n_bounces;

  cin >> distance >> n_bounces;

  // geometric series r = 0.5 
  // S_n = a(r^n - 1) / (1 - r)
  
  n_bounces = n_bounces + 1; // add the first bounce
  double sum = distance * (1 - pow(0.5, n_bounces)) / (1 - 0.5);
  cout << sum << endl;

  return 0;
}
