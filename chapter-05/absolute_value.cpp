#include <iostream>
using namespace std;

double absoluteValue(double x) {
  if (x < 0) {
    return -x;
  } else {
    return x;
  }
}

int main() {
  int a = 13;
  int b = -26;
  int c = 0;

  cout << "The absolute value of " << a << " is " << absoluteValue(a) << endl;
  cout << "The absoulte value of " << b << " is " << absoluteValue(b) << endl;
  cout << "The absolute value of " << c << " is " << absoluteValue(c) << endl;

  return 0;
}
