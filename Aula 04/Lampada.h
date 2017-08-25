#pragma once
#ifndef H_LAMPADA
#define H_LAMPADA

#include "Relogio.h"
#include <iostream>

class Lampada
{

public:
	void setConsumoDeEnergia(double consumo);
	void ligar();
	void desligar();
	void programar(Relogio *hInicio, Relogio *hFinal);
	void desprogramar();
	void atualizar(Relogio *hAtual);

	bool isLigada() const;
	bool isProgramada() const;
	void imprimir() const;


private:
	double consumoDeEnergia = 0.0;
	bool ligada = false;
	bool programada = false;

	Relogio *horaDeLigar = nullptr;
	Relogio *horaDeDesligar = nullptr;
};

#endif