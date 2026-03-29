#include <iostream>

/*
	Quais serão os valores de x, y, e p ao final do trecho de código abaixo?
	int x, y, *p
	y = 0
	p = &y
	*p = y+1
	x = *p - 1
	x = 4
*/

int main() {
	int x, y, * p;
	y = 0;
	p = &y;
	*p = y + 1;
	x = *p - 1;
	x = 4;

	std::cout << "Valores de x, y e *p:" << std::endl;
	std::cout << " x: " << x << std::endl;
	std::cout << " y: " << y << std::endl;
	std::cout << "*p: " << *p << std::endl;
	std::cout << " p: " << p << std::endl;

	return 0;
}