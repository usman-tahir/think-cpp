#include <iostream>
#include <cmath>
using namespace std;

void printLogarithm(double x) {
  if (x <= 0.0) {
    cout << "you can only take the Logarithm of a positive number." << endl;
    return;
  }

  double result = log(x);
  cout << "The log of " << x << " is " << result << endl;
}

int main() {
  printLogarithm(12);
  printLogarithm(0);
  printLogarithm(-100);

  return 0;
}
