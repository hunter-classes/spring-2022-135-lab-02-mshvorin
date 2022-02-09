#include <iostream>

void print_interval (int L,int U) {
	std::cout << "Please Enter L: " << std::endl;
	std::cin >> L;
	std::cout << "Please Enter U: " << std::endl;
	std::cin >> U;
	do {
	std::cout << L << " ";
	L++;
	} while (L < U + 1);
	
}

