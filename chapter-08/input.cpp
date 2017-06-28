#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int x;

  cout << "enter an integer: ";
  cin >> x;

  if (cin.good() == false) {
    cout << "that was not an integer" << endl;
    return -1;
  }

  cout << x << endl;

  return 0;
}
