#include <iostream>
using namespace std;

struct Point {
  double x, y;
};

struct Rectangle {
  Point corner;
  double width, height;
};

Point findCenter(Rectangle &r) {
  double x = r.corner.x + r.width / 2;
  double y = r.corner.y + r.height / 2;
  Point result = { x, y };
  return result;
}

void printRectangleInfo(Rectangle r) {
  cout << "<Rectangle(corner, width, height)> ((" << r.corner.x << ", " << r.corner.y << ")" << ", " << r.width << ", " << r.height << ")" << endl;

  // print out the center of the rectangle
  Point center = findCenter(r);
  cout << "Center: (" << center.x << ", " << center.y << ")" << endl;
}

int main() {
  Point corner = { 0.0, 0.0 };
  Rectangle box = { corner, 100.0, 200.0 };
  printRectangleInfo(box);

  return 0;
}
