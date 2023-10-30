#include <iostream>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  int coordinates[k][2];
  char grid[n][m];

  for (int a = 0; a < k; a++) {
    int x, y;
    cin >> x >> y;

    coordinates[a][0] = x;
    coordinates[a][1] = y;

    grid[x - 1][y - 1] = '*';
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] != '*') {
        grid[i][j] = '.';
      }

      cout << grid[i][j];
    }
    cout << '\n';
  }

  return 0;
}
