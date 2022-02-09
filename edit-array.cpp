#include <iostream>

int main() {
	int i = 1;
	int v = 1;
	int mydata [] = {1,1,1,1,1,1,1,1,1,1};
		std::cout << "Enter a index : ";
		std::cin >> i;
		std::cout << "Enter a number : ";
		std::cin >> v;
	while (i < 10 and i > -1) {
		mydata [i] = v;
		std::cout << "Enter a index : ";
		std::cin >> i;
		std::cout << "Enter a number : ";
		std::cin >> v;
	}
	for (int f = 0; f < 10 ; f++ ) {
	std::cout << mydata[f] << std::endl;
	}

}
