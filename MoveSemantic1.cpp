#include <iostream>
#include <vector>
#include <string>

template <typename T>
void move_vectors(std::vector<T>&v1, std::vector<T>&v2) {
	v2 = std::move(v1);
}

int main(int argc, char* argv[]) {
	std::vector <std::string> one = { "test_string1", "test_string2" };
	std::vector <std::string> two;

	std::cout << "one: ";
	for (std::string i : one) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	move_vectors(one, two);

	std::cout << "two: ";
	for (std::string i : two) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}