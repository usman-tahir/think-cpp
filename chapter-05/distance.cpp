#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
  double dx = (x2 - x1);
  double dy = (y2 - y1);
  double dSquared = (dx * dx) + (dy * dy);
  return sqrt(dSquared);
}

void printOrderedPair(double a, double b) {
  cout << "(" << a << ", " << b << ")";
}

int main() {
  int x1 = 1, x2 = 8, y1 = 5, y2 = 7;
  cout << "The distance between ";
  printOrderedPair(x1, x2);
  cout << " and ";
  printOrderedPair(y1, y2);
  cout << " is " << distance(x1, x2, y1, y2) << endl;

  return 0;
}
