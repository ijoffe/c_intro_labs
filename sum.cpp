// Made by Isaac Joffe

#include <iostream>    // for cin and cout objects
using namespace std;    // eliminates use of std:: prefix

// accepts two integers from standard in and prints their sum
int main() {
	int number1, number2, sum;    // assume int provides enough storage
	cin >> number1 >> number2;
	sum = number1 + number2;
	cout << sum << endl;
	return 0;    // default return
}