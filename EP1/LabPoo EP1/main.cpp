// Exercicio Programa 01 para disciplina da Escola Politecnica da USP
// Disciplina: PCS 3111 - Laboratorio de Programacao Orientada a Objetos
// 2o semestre de 2017
// 8994178 Marina Scott do Val
// 8039011 Pedro Henrique Lage Furtado de Mendonca

#include <iostream>
#include "Ponto.h"

void main() {
	Ponto A;
	Ponto B;

	A.setX(3.1415926);
	A.setY(2.7182818);

	B.setX(1.2345678);
	B.setY(8.7654321);

	A.imprimir();
	B.imprimir();
	std::cout << "A == B? " << A.eIgual(&B) << " B == A? " << B.eIgual(&A) << std::endl << std::endl;

	B.setX(3.1415899);
	B.setY(2.7182799);

	A.imprimir();
	B.imprimir();
	std::cout << "A == B? " << A.eIgual(&B) << " B == A? " << B.eIgual(&A) << std::endl << std::endl;

	system("pause");
	return;
}