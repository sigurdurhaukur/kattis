
#include <iostream>
#include <string>

using namespace std;

void look_and_remove_pedals(int* leafs, int n) {
  int n_he_loves_me = 0;

  for (int i = 0; i < n; i++) {
    if (leafs[i] == 1) {
      n_he_loves_me++;
    }

    if (n_he_loves_me % 2 == 0) {
      leafs[i] = 0;
    }
  }
}

void rotate_flower(int* leafs, int n, const string& direction) {
  int* rotated = new int[n];  // Create a new array to hold the rotated values
  if (direction == "clockwise") {
    for (int i = 0; i < n; i++) {
      rotated[(i + 1) % n] = leafs[i];  // Rotate the values clockwise
    }
  } else if (direction == "counterclockwise") {
    for (int i = 0; i < n; i++) {
      rotated[i] = leafs[(i + 1) % n];  // Rotate the values counterclockwise
    }
  }

  for (int i = 0; i < n; i++) {
    leafs[i] =
        rotated[i];  // Copy the rotated values back to the original array
  }

  delete[] rotated;  // Delete the dynamically allocated rotated array
}

void print_flower(int* leafs, int n) {
  for (int i = 0; i < n; i++) {
    cout << leafs[i] << ' ';
  }
  cout << endl;
}

int main() {
  int n_leafs;
  cin >> n_leafs;
  int* leafs = new int[n_leafs];
  int n_pedals_left = ceil(n_leafs / 2.0);

  for (int i = 0; i < n_leafs; i++) {
    leafs[i] = (i + 1) % 2;  // initialize with alternating 1 and 0
  }

  int rotations = 0;
  while (n_pedals_left > 1) {
    print_flower(leafs, n_leafs);
    bool he_loves_me = leafs[0] == 1;

    if (he_loves_me) {
      rotate_flower(leafs, n_leafs, "clockwise");
    } else {
      leafs[0] = 0;
      n_pedals_left -= 1;
      rotations += 1;
    }
  }

  //   rotate back
  for (int i = 0; i < (rotations % n_leafs); i++) {
    rotate_flower(leafs, n_leafs, "counterclockwise");
  }

  for (int i = 0; i < n_leafs; i++) {
    if (leafs[i] == 1) {
      cout << (i + 1) << endl;
    }
  }

  delete[] leafs;
  return 0;
}