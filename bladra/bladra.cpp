#include <iostream>
#include <vector>

using namespace std;

int main() {
  int amount_of_problems, total_solved;
  cin >> amount_of_problems >> total_solved;

  vector<int> problems(amount_of_problems, 0);

  for (int i = 0; i < total_solved; i++) {
    int _, problem_index;
    cin >> _ >> problem_index;
    problem_index -= 1;

    if (problem_index >= 0 && problem_index < amount_of_problems) {
      if (problems[problem_index] == 0) {
        problems[problem_index] = 1;
      } else {
        problems[problem_index] += 1;
      }
    }
  }

  int min = 101;  // 100 is the maximum amount of problem solved
  int min_index = 0;

  cout << endl;
  for (int i = 0; i < amount_of_problems; i++) {
    if (problems[i] < min) {
      min = problems[i];
      min_index = i;
    }
  }

  cout << min << endl;

  return 0;
}
