// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // for holding the words
#include <unordered_set>    // to hold the word strings
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at "https://open.kattis.com/problems/nodup"

// takes a line of words from standard in and prints if any words in it repeat
// to standard out
int main() {
	unordered_set<string> words;    // used to store words already seen
	string inputline;
	getline(cin, inputline);    // read whole line of input at once
	bool flag = true;    // assume no words repeat

	for (unsigned long int i = 0; i < inputline.size(); i++) {
		string word = "";    // set an empty string to hold the next word
		while (inputline[i] != ' ') {
			word += inputline[i];    // append nonspace characters to the word
			i++;    // continue to move along input
		}

		if (words.find(word) != words.end()) {
			flag = false;    // word has been seen before, is a repeated word
			break;    // no need to keep looking for words
		} else {
			words.insert(word);    // make note to check against future words
		}
	}

	if (flag) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
	return 0;    // default return
}
