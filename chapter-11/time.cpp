#include <iostream>
using namespace std;

struct Time {
  int hour, minute;
  double second;
  string period;

  void print();
  void increment(double seconds);
  double convertToSeconds() const;
};

Time::Time (double seconds) {
  this.hour = int (seconds / 3600.0);
  seconds -= this.hour * 3600.0;
  this.minute = int(seconds / 60.0);
  seconds -= this.minute * 60.0;
  this.seconds = seconds;
}

double Time::convertToSeconds() const {
  int minutes = hour * 60 + minute;
  double seconds = minutes * 60 + second;
  return seconds;
}

bool Time::after (const Time &time2) const {
  if (hour > time2.hour) return true;
  if (hour < time2.hour) return false;

  if (minute > time2.minute) return true;
  if (minute < time2.minute) return false;

  if (second > time2.second) return true;

  return false;
}

void Time::print() {
  Time time = *this;
  cout << time.hour << ":" << time.minute << ":" << time.second << " AM" << endl;
  cout << "Time in seconds: " << time.convertToSeconds() << endl;
}

void Time::increment (double seconds) {
  second += seconds;

  while (second >= 60.0) {
    second -= 60.0;
    minute += 1;
  }

  while (minute >= 60) {
    minute -= 60.0;
    hour += 1;
  }
}

int main() {
  Time t = {9, 14, 56, "AM"};
  t.print();
  t.increment(3600);
  t.print();

  return 0;
}
