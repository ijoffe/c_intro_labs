// Made by Isaac Joffe

#include <iostream>    // for cout object
using namespace std;    // eliminate use of std:: prefix

// takes three integers from standard in and prints their average value as a
// float to standard out
int main() {
	int number1, number2, number3;    // assume int provides enough storage
	float average;    // to allow for decimal values
	cin >> number1 >> number2 >> number3;
	average = (number1 + number2 + number3) / 3.0;    // 3.0 to avoid integer
	cout << average << endl;
	return 0;    // default return
}
