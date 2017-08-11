#include <iostream>

int somarRepetidos(int repeticoes, int a[], int tamanho);

void teste1() {
	// Nao funciona quando o ultimo elemento faz parte da repeticao
	// (j < tamanho - 1, deveria ser j < tamanho)
	int a[] = { 1,2,10,10 };
	int soma = somarRepetidos(2, a, 4);
	if (soma != 10) { std::cout << "Erro"; }

	return;
return;
}


void teste2() {
	// Soma o 1o e 2o elemento duas vezes se o criterio de repeticao for valido
		// Erro na linha do for abaixo do bool considerado = false;
	int a[] = { 10, 10, 10, 1,1,1, 2};
	int soma = somarRepetidos(3, a, 7);
	if (soma != 11) { std::cout << "Erro"; }

	return;
}