// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
using namespace std;    // eliminate use of std:: prefix

// prints the first 20 fibonacci numbers to standard out
int main() {
	short next, current = 1, previous = 0;    // short type gives enough space
	const int amount = 20;    // set number of numbers to be printed

	// print out trivial beginning numbers if required
	if (amount > 0) {
		cout << previous << endl;
	}
	if (amount > 1) {
		cout << number << endl;
	}

	// print out the next numbers in the series
	for (int i = 3; i <= amount; i++) {
		next = current + previous;    // next number is sum of the last two
		cout << next << endl;
		previous = current;    // update the trailing number in the series
		current = next;    // update the leading number in the series
	}
	return 0;    // default return
}
