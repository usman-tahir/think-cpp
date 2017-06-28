#include <iostream>
using namespace std;

struct Point {
  double x, y;
};

void reflect(Point &p) {
  double temp = p.x;
  p.x = p.y;
  p.y = temp;
}

void pointInfo(Point p) {
  cout << "<Point> (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
  Point a;
  a.x = 3.0;
  a.y = 4.0;

  Point b = {5.5, 6.75};

  pointInfo(a);
  pointInfo(b);

  reflect(a);
  pointInfo(a);

  return 0;
}
