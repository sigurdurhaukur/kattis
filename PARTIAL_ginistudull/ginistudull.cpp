// Copyright 2024 Sigurdur Haukur

#include <cmath> // For std::abs
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> incomes(N);

  for (int i = 0; i < N; ++i) {
    cin >> incomes[i];
  }

  // Calculate the Gini coefficient
  long long sumOfAbsoluteDifferences = 0;
  long long sumOfIncomes = 0;

  // Calculate the sum of all incomes
  for (int income : incomes) {
    sumOfIncomes += income;
  }

  // Calculate the sum of absolute differences of all pairs of incomes
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      sumOfAbsoluteDifferences += abs(incomes[i] - incomes[j]);
    }
  }
  double G =
      static_cast<double>(sumOfAbsoluteDifferences) / (2.0 * sumOfIncomes * N);

  cout << G << endl;

  return 0;
}
