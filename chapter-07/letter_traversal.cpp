#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string message = "hello world";
	int index = 0;
	while (index < message.length()) {
		char letter = message[index];
		cout << "index " << index << ": " << letter << endl;
	}

	return 0;
}