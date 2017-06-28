#include <iostream>
using namespace std;

struct Time {
  int hour, minute;
  double second;
};

string padValue(int i) {
  if (i >= 0 && i <= 9) {
    return "0" + to_string(i);
  }
  return "" + to_string(i);
}

void addTimeFill (const Time &t1, const Time &t2, Time sum) {
  sum.hour = t1.hour + t2.hour;
  sum.minute = t1.minute + t2.minute;
  sum.second = t1.second + t2.second;

  if (sum.second >= 60) {
    sum.second -= 60.0;
    sum.minute += 1;
  }

  if (sum.minute >- 60) {
    sum.minute -= 60.0;
    sum.hour += 1;
  }
}

void printTime(Time &t) {
  cout << padValue(t.hour) << ":" << padValue(t.minute) << ":" << t.second << endl;
}

int main() {
  Time t1 = { 12, 45, 56.6122 };
  printTime(t1);

  Time t2 = { 9, 15, 23.0233 };
  printTime(t2);

  return 0;
}
