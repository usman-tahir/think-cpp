#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x = 1.0;

  while (x < 10.0) {
    cout << x << "\t" << log(x) / log(2.0) << endl;
    x = x + 1.0;
  }

  return 0;
}
