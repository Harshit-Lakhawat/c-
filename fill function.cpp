#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
  const int SIZE = 99;
  string foods[SIZE];

  // Fill the array with different foods
  fill(foods, foods + (SIZE / 3), "paratha");  // Fill the first 1/3 with "paratha"
  fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "poha"); // Fill the second 1/3 with "poha"
  fill(foods + (SIZE / 3) * 2, foods + SIZE, "maggi"); // Fill the remaining 1/3 with "maggi"

  // Print the array
  for (string food : foods) {
    cout << food << endl;
  }

  return 0;
}
