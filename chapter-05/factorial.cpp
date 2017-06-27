#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int number = 5;

  cout << number << "! is " << factorial(number) << endl;

  return 0;
}
