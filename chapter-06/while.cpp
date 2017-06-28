#include <iostream>
using namespace std;

int countdown(int n) {
  while (n > 0) {
    cout << n << endl;
    n = n - 1;
  }
  cout << "Liftoff!" << endl;
  return 0;
}

void sequence(int n) {
  while (n != 1) {
    cout << n << endl;
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
  }
}

int main() {
  int count = 10;
  countdown(count);

  sequence(10);

  return 0;
}
