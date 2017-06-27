#include <iostream>
#include <cstring>
using namespace std;

int find(string s, char c, int i) {
	while (i < s.length()) {
		if (s[i] == c) {
			return i;
		}
		i = i + 1;
	}
	return -1;
}

int main() {
	string fruit = "banana";
	int length = fruit.length();
	int count = 0;

	int index = 0;

	// search for the letter 'a'
	cout << "the letter 'a' in the word " << fruit << " appears at index: " << find(fruit, 'a', index) << endl;

	return 0;
}