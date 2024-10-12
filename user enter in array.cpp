#include <iostream>

using namespace std;

int main() {
  string foods[5];
  int size = sizeof(foods) / sizeof(foods[0]);
  string temp;

  // Input loop
  for (int i = 0; i < size; i++) {
    cout << "Enter food you like or q to quit (" << i + 1 << "): ";
    getline(cin, temp);
    if (temp == "q") {
      break; // Break out of the loop if the user enters "q"
    } else {
      foods[i] = temp;
    }
  }

  // Print the foods
  for (int i = 0; i < size; i++) {
    if (!foods[i].empty()) { // Print only if the element is not empty
      cout << foods[i] << "\n";
    }
  }

  return 0;
}
