// Exercicio Programa 01 para disciplina da Escola Politecnica da USP
// Disciplina: PCS 3111 - Laboratorio de Programacao Orientada a Objetos
// 2o semestre de 2017
// 8994178 Marina Scott do Val
// 8039011 Pedro Henrique Lage Furtado de Mendonca

#pragma once
#ifndef H_PONTO
#define H_PONTO

#include <cmath>
#include <iostream>
using namespace std;

class Ponto
{
public:
// Funcoes auto-explicativas
	// Getters
		double getX() const;
		double getY() const;

	// Setters
		void setX(double x);
		void setY(double y);

	void imprimir() const;

	// Retorna 1 quando esse ponto e "outro" forem iguais
	bool eIgual(const Ponto* outro) const;

	// Coordenadas x e y, respectivamente.
	double Coordenada[2] = {0.0, 0.0};
};

#endif // !H_PONTO
