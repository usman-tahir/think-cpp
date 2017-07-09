#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
  int i;
  for (i = 0; i < v.size(); i += 1) {
    cout << "index " << i << ": " << v[i] << endl;
  }
}

int main() {
  vector<int> count(4);
  count[0] = 1;
  count[1] = 2;
  count[2] = 3;
  count[3] = 4;

  printVector(count);
  return 0;
}
