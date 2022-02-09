
#include <iostream>

int main() {
	int i = 2;
	unsigned long int fib [60];
	fib[0] = 0;
	fib[1] = 1;
	while (i > 1 and i < 60) {
		fib[i] = fib[i-1] + fib [i-2];
		std::cout << fib[i] << std::endl;
		std::cout << i << std::endl;
		i++;
	}
}
