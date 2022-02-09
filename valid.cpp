#include <iostream>

int main() {
	int Number;
	std::cout << "Please enter a number between 0 and 100.\n" << std::endl;
	std::cin >> Number;
	while (Number < 0 or Number > 100) {
	std::cout << "Please enter another number.\n" << std::endl;
	std::cin >> Number;
	} 
	std::cout << Number * Number << std::endl; 
	return 0;
}
