/* Author: Denice Veluz
This program reads a sequence of integers that reads from a text file and calculates
the sum of those integers.

*/

#include <iostream>
using namespace std;

int main() {
	int sumofs = 0; //sets it equal to 0 so when it does the calculation 					it will set the calculation to sumofs
	int s;

while (cin >> s) { //while user inputs numbers into the variable of s, then it will calculate
	sumofs = s + sumofs; //calculation
	}

	cout << sumofs << endl; //outputs the sum

return 0;
}
