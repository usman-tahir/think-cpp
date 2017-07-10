#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

Card::Card() {
	suit = 0;
	rank = 0;
}

Card::Card(int s, int r) {
	suit = s;
	rank = r;
}

void Card::print_basic() {
	Card c = *this;
	cout << "Suit " << c.suit << ", Rank " << c.rank << endl;
}

void Card::print() {
	vector<string> suits(4);
	vector<string> ranks(14);

	suits[0] = "Clubs";
	suits[1] = "Diamonds";
	suits[2] = "Hearts";
	suits[3] = "Spades";

	ranks[1] = "Ace";
	ranks[2] = "2";
	ranks[3] = "3";
	ranks[4] = "4";
	ranks[5] = "5";
	ranks[6] = "6";
	ranks[7] = "7";
	ranks[8] = "8";
	ranks[9] = "9";
	ranks[10] = "10";
	ranks[11] = "Jack";
	ranks[12] = "Queen";
	ranks[13] = "King";

	cout << ranks[rank] << " of " << suits[suit] << endl;

}

bool Card::equals(const Card &c2) {
	return (rank == c2.rank && suit == c2.suit);
}

bool Card::isGreater(Card &c2) {
	if (suit > c2.suit) {
		return true;
	}

	if (suit < c2.suit) {
		return false;
	}

	if (rank > c2.rank) {
		return true;
	}

	if (rank < c2.rank) {
		return false;
	}

	// ranks and suits are equal
	return false;
}

string Card::convertEquals(bool output) {
	vector<string> booleans(2);
	booleans[0] = "false";
	booleans[1] = "true";

	return booleans[output];
}

int main() {

	// Card c1 = Card(3, 4);
	// Card c2 = Card(1, 12);
	// Card c3 = Card(3, 4);
	//
	// c1.print();
	// c2.print();
	// c3.print();
	//
	// cout << Card::convertEquals(c1.equals(c2)) << endl;
	// cout << Card::convertEquals(c1.equals(c3)) << endl;
	// cout << Card::convertEquals(c1.isGreater(c2)) << endl;

	// create a deck of cards
	Card defaultCard(3, 1);
	vector<Card> deck(52, defaultCard);
	int i = 0;

	for (int suit = 0; suit <= 3; suit++) {
		for (int rank = 1; rank <= 13; rank++) {
			// cout << "suit -> " << suit << ", rank -> " << rank << endl;
			deck[i].suit = suit;
			deck[i].rank = rank;
			deck[i].print();
			i++;
		}
	}

	return 0;
}
