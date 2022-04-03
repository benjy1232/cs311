// Name: Ben Serrano
// WSU ID: N543Y954
// Professor: Huabo Lu
// Date: 02-10-22
#include <iostream>
#include <vector>

// func1 appends v1 to v2
void func1(const std::vector<int>& v1, std::vector<int>& v2);
std::vector<bool> func2(const std::vector<int>& v, const int num);

int main(void) {
	// Test case 1
	std::vector<int> f1_v1 {10,20,30,40};
	std::vector<int> f1_v2 {100,200,300,400};
	func1(f1_v1, f1_v2);
	for (int i : f1_v2) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;

	// Test case 2
	std::vector<int> f2_v1 {11,12,13,14,15,16};
	int num = 2;
	std::vector<bool> isDivisible = func2(f2_v1, num);
	for (bool i : isDivisible) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}

void func1(const std::vector<int>& v1, std::vector<int>& v2) {
	for (int i : v1) {
		v2.push_back(i);
	}
	return;
}

std::vector<bool> func2(const std::vector<int>& v, const int num) {
	std::vector<bool> ret;
	for (int i : v) {
		ret.push_back(i % num == 0);
	}
	return ret;
}
