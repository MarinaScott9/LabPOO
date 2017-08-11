#include <iostream>

int somarRepetidos(int repeticoes, int a[], int tamanho);

void teste1() {
	// Nao funciona quando o ultimo elemento faz parte da repeticao
		// (j < tamanho - 1, deveria ser j < tamanho)
	int a[] = { 1,2,10,10};
	int soma = somarRepetidos(2, a, 4);
	if (soma != 10) { std::cout << "Erro"; }
	
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

// Implementacao de somarRepetidos.
// NAO ENTREGAR O somarRepetidos
int somarRepetidos(int repeticoes, int a[], int tamanho) {
	int soma = 0;

	for (int i = 0; i < tamanho; i++) {
		int quantidade = 0;
		
		// doesnt test last value
		// counts repeated elements
		for (int j = 0; j < tamanho - 1; j++) {
			if (a[i] == a[j]) quantidade++;
		}

		if (quantidade == repeticoes) {
			bool considerado = false;

			// criterio do for esta errado, ele permite somar o 1o e 2o elemento duas vezes
			// (se o criterio de repeticao for obedecido)
			for (int j = 1; j < i && !considerado; j++) {
				if (a[i] == a[j]) 
				{
					considerado = true;
				}
			}

			if (!considerado) {soma = soma + a[i]; std::cout << "somei " << a[i] << std::endl;}
		}
	}

	return soma;
}

// NAO ENTREGAR O MAIN
int main() {

	teste1();
	teste2();

	system("pause");
	return 0;
}
