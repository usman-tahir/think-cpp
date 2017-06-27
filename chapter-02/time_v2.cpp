#include <iostream>
using namespace std;

int main() {
	int hour, minute;

	hour = 11;
	minute = 59;

	cout << "Number of minutes since midnight: " << (hour * 60 + minute) << endl;
	cout << "Fraction of the hour that has passed: " << (minute * 100 / 60) << endl;

	return 0;
}