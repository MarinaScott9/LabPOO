// Exercicio Programa 01 para disciplina da Escola Politecnica da USP
// Disciplina: PCS 3111 - Laboratorio de Programacao Orientada a Objetos
// 2o semestre de 2017
// 8994178 Marina Scott do Val
// 8039011 Pedro Henrique Lage Furtado de Mendonca

#include "Serie.h"

void Serie::setNome(std::string nome) {
	Name = nome; return;
}

void Serie::setNomeDoCanalX(std::string nomeDoCanalX) {
	CanalX = nomeDoCanalX; return;
}

void Serie::setNomeDoCanalY(std::string nomeDoCanalY) {
	CanalY = nomeDoCanalY; return;
}

std::string Serie::getNome() const
{
	return Name;
}

std::string Serie::getNomeDoCanalX() const
{
	return CanalX;
}

std::string Serie::getNomeDoCanalY() const
{
	return CanalY;
}

int Serie::getQuantidade() const
{
	return myPoints.size();
}

bool Serie::estaVazia() const
{
	if (myPoints.size() == 0) { return true; }
	return false;
}

void Serie::adicionar(double x, double y)
{
	if (myPoints.size() >= NUMERO_MAXIMO_VALORES) { return; }

	Ponto A;
	A.setX = x;
	A.setY = y;

	myPoints.push_back(A);
	return;

}

Ponto * Serie::getLimiteSuperior()
{
	double XMax = 0.0;
	double YMax = 0.0;

	// Achar X Max

	// Achar Y Max

	// Colocar PontoMax = (XMax, YMax)

	return PontoMax;
}
