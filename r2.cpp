// Made by Isaac Joffe

#include <iostream>    // for cout object
using namespace std;    // eliminate use of std:: prefix

// solves kattis problem available at "https://open.kattis.com/problems/r2"

// takes two integers from standard in representing a mean and one of the
// numbers used for the mean and prints the other number used for the mean
// to standard out
int main() {
    short R1, R2, S;    // short type satisfies the kattis input gurantees
    cin >> R1 >> S;
    R2 = 2 * S - R1;    // rearrange the formula S=(R1+R2)/2
    cout << R2 << endl;
    return 0;    // default return
}
