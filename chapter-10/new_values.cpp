#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> values;
  int c, i, length;

  cin >> c;

  while (c != -1) {
    values.push_back(c);
    cin >> c;
  }

  length = values.size();
  for (i = 0; i < length; i += 1) {
    cout << values[i] << endl;
  }

  return 0;
}
