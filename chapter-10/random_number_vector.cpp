#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

vector<int> randomVector(int n, int upperBound) {
  vector<int> v (n);
  int i;

  for (i = 0; i < v.size(); i += 1) {
    v[i] = random() % upperBound;
  }
  return v;
}

void printVector(const vector<int> &v) {
  int i, length = v.size();

  for (i = 0; i < length; i += 1) {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> randomNumbers = randomVector(10, 10);
  printVector(randomNumbers);
  return 0;
}
