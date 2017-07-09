#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int i;

  // generate the random numbers
  for (i = 0; i < 4; i += 1) {
    int x = random();
    cout << (x % 100) << endl;
  }
  return 0;
}
