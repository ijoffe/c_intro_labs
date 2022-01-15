// Made by Isaac Joffe

#include <iostream>    // for cout object
using namespace std;    // eliminate use of std:: prefix

// takes a base-10 integer in standard in and prints its second-to-last digit
// to standard out
int main() {
	int number, digit;    // assume int provides enough stoarge
	cin >> number;
	if (number < 0) {
		number *= -1;    // ensure number is positive
	}
	// floor division moves digits over, modulus with 10 gives the last digit
	digit = (number / 10) % 10;
	cout << digit << endl;
	return 0;    // default return
}
