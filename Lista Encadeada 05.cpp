#include <iostream>

/*
	Exercício 5: Buscar um Elemento na Lista
		Implemente uma função que verifique se um valor está presente na lista e informe sua
		posição (índice).
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

int buscarElemento(Node* lista, int valor) {
	int indice = 0;
	Node* elementoAtual = lista;
	while (elementoAtual != nullptr) {
		if (elementoAtual->valor == valor) {
			return indice;
		}
		indice++;
		elementoAtual = elementoAtual->proximo;
	}
	return -1;
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

	std::cout << std::endl << "Qual elemento voce quer buscar na lista? ";
	std::cin >> valor;
	int posicao = buscarElemento(lista, valor);
	if (posicao != -1) {
		std::cout << std::endl << "Numero " << valor << " encontrado no indice " << posicao << std::endl;
	}
	else {
		std::cout << std::endl << "Numero " << valor << " nao esta na lista." << std::endl;
	}


	return 0;
}