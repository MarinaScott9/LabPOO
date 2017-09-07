// Exercicio Programa 01 para disciplina da Escola Politecnica da USP
// Disciplina: PCS 3111 - Laboratorio de Programacao Orientada a Objetos
// 2o semestre de 2017
// 8994178 Marina Scott do Val
// 8039011 Pedro Henrique Lage Furtado de Mendonca

#include <iostream>
using namespace std;
#include "Ponto.h"

double Ponto::getX() const
{
	return Coordenada[0];
}

double Ponto::getY() const
{
	return Coordenada[1];
}

void Ponto::setX(double x) {
	Coordenada[0] = x; return;
}

void Ponto::setY(double y) {
	Coordenada[1] = y; return;
}

void Ponto::imprimir() const {
	cout << "(" << Coordenada[0] << ", " << Coordenada[1] << ")" << endl;
	return;
}

bool Ponto::eIgual(const Ponto * outro) const
{
	const double Epsilon = 1E-5;
	double DistX = abs(outro->getX() - Coords[0]);
	double DistY = abs(outro->getY() - Coords[1]);

	if (DistX <= Epsilon && DistY <= Epsilon) return true;

	return false;
}
