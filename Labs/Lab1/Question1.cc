#include <iostream>
using std::cout;
using std::endl;

void printNumbers(int starting, int ending, int step);

void printNumbers(int starting, int ending, int step) {
	// TODO: implement this function
	if(ending > starting) {
		for (int i = starting; i < ending; i += step) {
			cout << i << " ";
		}
	} else {
		for (int i = starting; i > ending; i += step) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main(void) {
	// TODO: DO NOT CHANGE THE FUNCTION. ONLY UCOMMENT THESE FUNCTIONS ONE BY ONE
	
	// step 1: uncomment the following line, then click the first Check it! button.
	printNumbers(10, 20, 3);

	// step 2: uncomment the following line, then click the first Check it! button.
	printNumbers(10, -10, -2);

	// step 3: uncomment the following line, then click the first Check it! button.
	printNumbers(10, 15, 5);
}
