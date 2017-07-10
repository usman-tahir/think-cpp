#include <string>
using namespace std;

struct Card {

	// instance variables
	int suit, rank;

	// constructors
	Card();
	Card(int s, int r);

	// functions
	void print_basic();
	void print();
	bool equals(const Card &c2);
	bool isGreater(Card &c2);
	static string convertEquals(bool output);

};
