// Made by Isaac Joffe

#include <iostream>    // for cin and cout object
#include <algorithm>    // for max function
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at 
// "https://open.kattis.com/problems/pieceofcake2"

// takes an integer representing the side lengths of a cake as well as
// integers giving the location of cuts and prints the volume of the largest
// piece of cake
int main() {
    int length, height, width, depth = 4, volume;
    cin >> length >> height >> width;
    volume = max(height, length - height)*max(width, length - width)*depth;
    cout << volume << endl;
    return 0;    // default return
}
