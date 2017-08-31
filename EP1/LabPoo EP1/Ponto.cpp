// Exercicio Programa 01 para disciplina da Escola Politecnica da USP
// Disciplina: PCS 3111 - Laboratorio de Programacao Orientada a Objetos
// 2o semestre de 2017
// 8994178 Marina Scott do Val
// 8039011 Pedro Henrique Lage Furtado de Mendonca

#include "Ponto.h"

double Ponto::getX() const 
{
	return Coords[0];
}

double Ponto::getY() const
{
	return Coords[1];
}

void Ponto::setX(double x) {
	Coords[0] = x; return;
}

void Ponto::setY(double y) {
	Coords[1] = y; return;
}

void Ponto::imprimir() const {
	std::cout << "(" << Coords[0] << ", " << Coords[1] << ")\n";
	return;
}

bool Ponto::eIgual(const Ponto * outro) const
{
	const double Epsilon = 1E-5;
	double DistX = std::abs(outro->getX() - Coords[0]);
	double DistY = std::abs(outro->getY() - Coords[1]);

	if (DistX <= Epsilon && DistY <= Epsilon) { return true; }

	return false;
}


