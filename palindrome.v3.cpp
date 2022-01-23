// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <string>    // to read in input
#include <vector>    // to be used for the words
#include <algorithm>    // for reverse function
using namespace std;    // eliminate use of std:: prefix

// takes an input string from standard in and prints if it is a palindrome or
// not to standard out
int main() {
    string inputline;
    getline(cin, inputline);    // read whole line of input at once
    vector<char> words, flipped;
    for (long unsigned int i = 0; i < inputline.size(); i++) {
        if (inputline[i] != ' ') {
            words.push_back(inputline[i]);    // add non-spaces to the back
            flipped.push_back(inputline[i]);    // add non-spaces to the back
        }
    }

    reverse(flipped.begin(), flipped.end());    // flip order of characters
    bool flag = true;    // assume default is palindrome
    for (long unsigned int i = 0; i < words.size() / 2; i++) {
        if (words[i] != flipped[i]) {
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
