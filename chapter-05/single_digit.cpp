#include <iostream>
using namespace std;

bool isSingleDigit(int x) {
  if (x >= 0 && x < 10) {
    return true;
  }
  return false;
}

bool isEvenNumber(int x) {
  return x % 2 == 0;
}

char convertNumberToBooleanLetter(int x) {
  if (x == 1) {
    return 'T';
  }
  return 'F';
}

int main() {
  int a = 13;
  int b = 4;

  cout << a << " is a single digit: " << convertNumberToBooleanLetter(isSingleDigit(a)) << endl;
  cout << a << " is even: " << convertNumberToBooleanLetter(isEvenNumber(a)) << endl;

  cout << b << " is a single digit: " << convertNumberToBooleanLetter(isSingleDigit(b)) << endl;
  cout << b << " is even: " << convertNumberToBooleanLetter
  (isEvenNumber(b)) << endl;

  return 0;
}
