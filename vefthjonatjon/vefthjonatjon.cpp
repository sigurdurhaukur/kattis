#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  int max_working_computers;
  int n_cpus = 0;
  int n_gpus = 0;
  int n_drives = 0;

  for (int i = 0; i < n; i++) {
    char a, b, c;
    cin >> a >> b >> c;

    int count = 0;

    if (a == 'J') {
      n_cpus++;
    }
    if (b == 'J') {
      n_gpus++;
    }
    if (c == 'J') {
      n_drives++;
    }
  }

  max_working_computers = min(n_cpus, min(n_gpus, n_drives));
  cout << max_working_computers << endl;
}