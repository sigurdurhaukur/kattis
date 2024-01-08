#include <iostream>
#include <vector>

using namespace std;

class TuringMachine {
 public:
  int i;
  int j;
  vector<int> tape;

  TuringMachine(int i, int j, vector<int> bits) {
    this->i = i;  // index of head
    this->j = j;  // halt index
    this->tape = bits;
  }

  vector<int> sample(int a, int b) {
    // return bits[a:b]
    vector<int> c;
    for (int i = a; i < b; i++) {
      c.push_back(tape[i]);
    }
    return c;
  }

  vector<int> xor_it(vector<int> a) {
    // return a ^ 1
    vector<int> c;

    for (int i = 0; i < a.size(); i++) {
      c.push_back(a[i] ^ 1);
    }
    return c;
  }

  int count_ones() {
    // return sum(tape)
    int c = 0;
    for (int i = 0; i < tape.size(); i++) {
      c += tape[i];
    }
    return c;
  }

  void print_tape() {
    for (int i = 0; i < tape.size(); i++) {
      cout << tape[i] << " ";
    }
    cout << endl;
  }

  TuringMachine& xor_subsection() {
    vector<int> sample = this->sample(this->i, this->j);
    vector<int> xored = this->xor_it(sample);

    for (int k = this->i; k < this->j; k++) {
      this->tape[k] = xored[k - this->i];
    }

    return *this;
  }

  int find_max_ones() {
    int max_ones = 0;

    for (int start = 0; start < tape.size(); start++) {
      for (int end = start + 1; end <= tape.size(); end++) {
        // Save the original state of the tape
        vector<int> original_tape = tape;

        // Set i and j, then run xor_subsection
        i = start;
        j = end;
        xor_subsection();

        // Count the ones and compare with the current max
        int current_ones = count_ones();
        if (current_ones > max_ones) {
          max_ones = current_ones;
        }

        // Restore the original state of the tape before the next iteration
        tape = original_tape;
      }
    }

    return max_ones;
  }

  int find_max_ones_optimized() {
    // Precompute the cumulative sum
    vector<int> cumulative(tape.size() + 1, 0);
    for (int i = 1; i <= tape.size(); i++) {
      cumulative[i] = cumulative[i - 1] + tape[i - 1];
    }

    int total_ones = cumulative[tape.size()];
    int max_ones = total_ones;
    int current_ones;

    for (int start = 0; start < tape.size(); start++) {
      for (int end = start; end <= tape.size(); end++) {
        int ones_in_subsection = cumulative[end] - cumulative[start];
        int zeros_in_subsection = (end - start) - ones_in_subsection;
        current_ones = total_ones - ones_in_subsection + zeros_in_subsection;

        max_ones = max(max_ones, current_ones);
      }
    }

    return max_ones;
  }
};

int main() {
  int n;
  cin >> n;

  // initialize bits
  vector<int> tape(n);
  for (int i = 0; i < n; i++) {
    cin >> tape[i];
  }

  // initialize turing machine
  int i = 0;
  int j = 0;
  TuringMachine turing(i, j, tape);

  int max_ones = turing.find_max_ones_optimized();
  cout << max_ones << endl;

  return 0;
}
