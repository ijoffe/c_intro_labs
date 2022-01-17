// Made by Isaac Joffe

#include <iostream>    // for cout object
using namespace std;    // eliminate use of std:: prefix

// takes two integers from standard in and prints the value of the first
// integer to the power of the second to standard out
int main() {
	int base, exponent, result;    // assume int provides enough storage space
	cin >> base >> exponent;
	result = 1;
	for (int i = 1; i <= exponent; i++) {
		result *= base;    // multiply base with itself exponent times
	}
	cout << result << endl;
	return 0;    // default return
}
