#include <iostream>

/*
	2) Exibir o Endereço e o Valor da Variável
		Objetivo: Declarar uma variável, armazenar seu endereço em um ponteiro e imprimir ambos.
		1. Declare uma variável int e atribua um valor.
		2. Crie um ponteiro que aponte para essa variável.
		3. Exiba o endereço e o valor da variável utilizando o ponteiro.
		Dica: Use os operadores & e *.
*/

int main() {
	int minhaVariavel = 15;

	std::cout << "Valor de minhaVariavel: " << minhaVariavel << std::endl << std::endl;

	int* ponteiro = &minhaVariavel;
	std::cout << "Utilizando ponteiro:" << std::endl;
	std::cout << "Endereco de memoria: " << ponteiro << std::endl;
	std::cout << "              Valor: " << *ponteiro << std::endl;

	return 0;
}