#include <iostream>
#include <cmath>
using namespace std;

double area(double radius) {
  double pi = acos(-1.0);
  double area = (pi * radius * radius);
  return area;
}

int main() {
  int radius = 12;

  cout << "the area of a circle with radius " << radius << " is " << area(radius) << endl;

  return 0;
}
