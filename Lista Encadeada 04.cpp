#include <iostream>

/*
	Exercício 4: Contar Elementos da Lista
		Crie uma função que conte quantos elementos existem na lista e retorne esse valor.
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

	std::cout << "nullptr" << std::endl << std::endl;
}

// Exercício 1: Inserir Elementos no Início da Lista
void inserirInicio(Node*& lista, int valor) {
	Node* novoNode = new Node;
	novoNode->valor = valor;
	novoNode->proximo = lista;
	lista = novoNode;
}

// Exercício 4: Contar Elementos da Lista
int contarElementos(Node* lista) {
	int contador = 1;

	if (lista == nullptr) {
		return 0;
	}

	Node* elementoAtual = lista;
	while (elementoAtual->proximo != nullptr) {
		contador++;
		elementoAtual = elementoAtual->proximo;
	}
	return contador;
}

int main() {

	Node* lista = nullptr;
	int valor;

	std::cout << "Digite 5 numeros inteiros para a lista:" << std::endl;
	for (int i = 1; i <= 5; i++) {
		std::cout << "Numero " << i << ": ";
		std::cin >> valor;

		inserirInicio(lista, valor);
	}

	imprimirLista(lista);

	std::cout << "Total de elementos na lista: " << contarElementos(lista) << std::endl;

	return 0;
}