#include <iostream>

/*
	Exercício 3: Remover um Elemento Específico
		Implemente uma função que remova da lista o primeiro nó que contenha um valor informado
		pelo usuário.
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


// Exercício 3: Remover um Elemento Específico
void removerElemento(Node*& lista, int valor) {
	if (lista == nullptr) {
		std::cout << "A lista já está vazia!" << std::endl;
		return;
	}

	// Elemento atual deve ser deletado
	if (lista->valor == valor) {
		// Pegando o elemento
		Node* temp = lista;

		// Atualizando a lista já sem o elemento
		lista = lista->proximo;

		// Deletando o elemento da memória de forma segura
		delete temp;

		std::cout << "Elemento " << valor << " foi removido." << std::endl;
		return;
	}

	// Percorre até o próximo item ser o elemento a ser deletado
	Node* elementoAtual = lista;
	while (elementoAtual->proximo != nullptr && elementoAtual->proximo->valor != valor) {
		elementoAtual = elementoAtual->proximo;
	}

	if (elementoAtual->proximo != nullptr) {
		// Pegando o elemento
		Node* temp = elementoAtual->proximo;

		// Atualizando a lista já sem o elemento
		elementoAtual->proximo = elementoAtual->proximo->proximo;

		// Deletando o elemento da memória de forma segura
		delete temp;

		std::cout << "Elemento " << valor << " foi removido." << std::endl;
	}
	else {
		std::cout << "Elemento " << valor << " nao encontrado na lista." << std::endl;
	}
}

int main() {

	Node* lista = nullptr;
	int valor;

	std::cout << "Digite 5 numeros inteiros para a lista:" << std::endl;
	for (int i = 1; i <= 5; i++) {
		std::cout << "Numero " << i << ": ";
		std::cin >> valor;

		inserirFinal(lista, valor);
	}
	imprimirLista(lista);

	std::cout << std::endl << "Qual elemento voce gostaria de remover? ";
	std::cin >> valor;
	removerElemento(lista, valor);
	imprimirLista(lista);

	return 0;
}