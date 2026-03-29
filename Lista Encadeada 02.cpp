#include <iostream>

/*
	Exercício 2: Inserir no Fim da Lista
		Altere o programa para inserir os elementos no fim da lista ao invés do início.
		Você precisará de uma função inserirFim(Node*& cabeca, int valor).
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

// Exercício 2: Inserir no Fim da Lista
void inserirFinal(Node*& lista, int valor) {
	Node* novoNode = new Node;
	novoNode->valor = valor;
	novoNode->proximo = nullptr;

	if (lista == nullptr) {
		lista = novoNode;
		return;
	}

	Node* nodeAtual = lista;
	while (nodeAtual->proximo != nullptr) {
		nodeAtual = nodeAtual->proximo;
	}
	nodeAtual->proximo = novoNode;
}

int main() {

	Node* cabeca = nullptr;
	int valor;

	std::cout << "Digite 5 numeros inteiros para a lista:" << std::endl;
	for (int i = 1; i <= 5; i++) {
		std::cout << "Numero " << i << ": ";
		std::cin >> valor;

		inserirFinal(cabeca, valor);
	}

	imprimirLista(cabeca);

	return 0;
}