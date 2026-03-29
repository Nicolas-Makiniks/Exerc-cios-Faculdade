#include <iostream>

/*
	3. Alterar o Valor de uma Variável Usando Ponteiros
		Objetivo: Modificar o valor de uma variável através de um ponteiro.

		Desafio:
			1. Declare uma variável int com um valor inicial.
			2. Crie um ponteiro para essa variável.
			3. Use o ponteiro para modificar o valor da variável e exiba o resultado.
*/

int main() {
	int minhaVariavel = 15;

	std::cout << "Valor minhaVariavel: " << minhaVariavel << std::endl << std::endl;

	std::cout << "Alterando atraves de ponteiros." << std::endl;
	int* ponteiro = &minhaVariavel;
	*ponteiro = 42;

	std::cout << "Valor alterado para: " << *ponteiro << std::endl;

	return 0;
}