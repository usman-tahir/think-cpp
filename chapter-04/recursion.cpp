#include <iostream>
using namespace std;

void countDown(int n) {
  if (n == 0) {
    cout << "Lift off!" << endl;
  } else {
    cout << n << endl;
    countDown(n - 1);
  }
}

// Improved newLine function
void printNewline(int x) {
  if (x > 0) {
    cout << endl;
    printNewline(x - 1);
  }
}

int main() {
  countDown(10);
  printNewline(3);
  cout << "printout after the printNewline call";

  return 0;
}
