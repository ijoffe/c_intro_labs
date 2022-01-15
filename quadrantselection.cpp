// Made by Isaac Joffe

#include <iostream>    // for cout object
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at 
// "https://open.kattis.com/problems/quadrant"

// takes two integers from standard input representing a point in R^2 and
// prints the integer quadrant number to stndard out
int main() {
	short x, y;    // short type satisfies the kattis input gurantees
	cin >> x >> y;
	// quadrants are numbered 1-4 starting from x+, y+ moving counterclockwise
	if (x > 0 and y > 0) {
		cout << 1 << endl;
	} else if (x < 0 and y > 0) {
		cout << 2 << endl;
	} else if (x < 0 and y < 0) {
		cout << 3 << endl;
	} else if (x > 0 and y < 0) {
		cout << 4 << endl;
	} else {
		cout << "origin" << endl;    // extra functionality for (0,0) case
	}
	return 0;    // default return
}