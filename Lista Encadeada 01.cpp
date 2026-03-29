#include <iostream>

/*
	Exercício 1: Inserir Elementos no Início da Lista
		Crie uma lista encadeada simples com inserção no início. O usuário deve informar 5 números
		inteiros que serão inseridos na lista. Depois, imprima todos os elementos.
*/

struct Node {
	int valor;
	Node* proximo;
};

void imprimirLista(Node* cabeca) {
	Node* atual = cabeca;

	std::cout << std::endl << "Lista encadeada atual:" << std::endl;
	while (atual != nullptr) {
		std::cout << atual->valor << " -> ";
		atual = atual->proximo;
	}

	std::cout << "nullptr" << std::endl;
}

// Exercício 1: Inserir Elementos no Início da Lista
void inserirInicio(Node*& lista, int valor) {
	Node* novoNode = new Node;
	novoNode->valor = valor;
	novoNode->proximo = lista;
	lista = novoNode;
}

int main() {

	Node* cabeca = nullptr;
	int valor;

	std::cout << "Digite 5 numeros inteiros para a lista:" << std::endl;
	for (int i = 1; i <= 5; i++) {
		std::cout << "Numero " << i << ": ";
		std::cin >> valor;

		inserirInicio(cabeca, valor);
	}

	imprimirLista(cabeca);

	return 0;
}