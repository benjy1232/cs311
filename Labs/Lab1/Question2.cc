#include <iostream>
#include <string>

// TODO: define the prototype of required function
int oneLetterFrequency(std::string, char);

int main() {
	// step 1: uncomment following code snippet to call function oneLetterFrequency()
	// expected output: 2
	std::cout << oneLetterFrequency("hello", 'l') << std::endl;

	// step 2: uncomment following code snippet to call function oneLetterFrequency()
	// expected output: 3
	std::cout << oneLetterFrequency("hellow, how are you Oliver007?", 'o') << std:: endl;

	// step 3: uncomment following code snippet to call function oneLetterFrequency()
	// expected output: 0
	std::cout << oneLetterFrequency("abcdefg", 'h') << std::endl;
}

// TODO: implement require function.
int oneLetterFrequency(std::string str, char lookFor) {
	int freq = 0;
	for(int i = 0; i < str.size(); i++) {
		if(str[i] == lookFor) {
			freq++;
		}
	}
	return freq;
}
