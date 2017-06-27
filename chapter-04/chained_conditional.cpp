#include <iostream>
using namespace std;

int main() {
  int number = 13;

  if (number > 0) {
    cout << number << " is positive." << endl;
  } else if (number < 0) {
    cout << number << " is negative." << endl;
  } else {
    cout << number << " is zero." << endl;
  }

  return 0;
}
