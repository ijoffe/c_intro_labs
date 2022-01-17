// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <stack>    // to hold the program data
#include <string>    // to read in data with spaces
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at 
// "https://open.kattis.com/problems/delimitersoup"

// takes an integer length and a sequence of brackets of that length and
// prints whether or not it has an error and where and what that error is,
// errors occur when brackets are not closed with their own type
int main() {
	short length;    // short type satisfies kattis input gurantees
	cin >> length;
	stack<char> program;    // stack represents input sequence

	bool flag = true;    // assume ok to start
	char type, character;
	short index;
	cin.get(character);    // account for newline after length input
	program.push(character);    // initiate stack so it is never empty

	for (int i = 0; i < length; i++) {
		cin.get(character);    // receive next charcater from standard input

		if (character == '(') {
			program.push('(');    // add it to top as most recent opening
		} else if (character == ')') {
			if (program.top() == '(') {
				// if most recent opening matches, pair is complete, pop it
				program.pop();
			} else {
				// if it didnt match there is syntax error, assign error info
				flag = false;
				type = ')';
				index = i;
				break;    // no need to keep checking
			}

		} else if (character == '[') {
			program.push('[');    // add it to top as most recent opening
		} else if (character == ']') {
			if (program.top() == '[') {
				// if most recent opening matches, pair is complete, pop it
				program.pop();
			} else {
				// if it didnt match there is syntax error, assign error info
				flag = false;
				type = ']';
				index = i;
				break;    // no need to keep checking
			}

		} else if (character == '{') {
			program.push('{');    // add it to top as most recent opening
		} else if (character == '}') {
			if (program.top() == '{') {
				// if most recent opening matches, pair is complete, pop it
				program.pop();
			} else {
				// if it didnt match there is syntax error, assign error info
				flag = false;
				type = '}';
				index = i;
				break;    // no need to keep checking
			}
		}
	}

	if (flag) {
		cout << "ok so far" << endl;
	} else {
		cout << type << " " << index << endl;    // print error info
	}
	return 0;    // default return
}
