#include <iostream>

int pow(int a = 0, int b = 0) {
	int resultado = 1;

	for (int i = 0; i < b; i++) {
		resultado = resultado * a;
	}

	return resultado;
}