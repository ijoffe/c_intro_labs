// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <vector>    // to be used for the words
using namespace std;    // eliminate use of std:: prefix

// takes an input string and prints if it is a palindrome or not
int main() {
	vector<char> words;
	char character;
	while (cin >> character) {    // read until end of input (CRTL+D)
		words.push_back(character);    // add new characters to the back
	}

	bool flag = true;    // assume default is palindrome
	for (long unsigned int i = 0; i < words.size() / 2; i++) {
		if (words[i] != words[words.size() - i - 1]) {
			flag = false;    // if characters dont match, not a palindrome
			break;
		}
	}

	if (flag) {
		cout << "Palindrome" << endl;
	} else {
		cout << "Not a Palindrome" << endl;
	}
	return 0;    // default return
}
