// Exercicio Programa 01 para disciplina da Escola Politecnica da USP
// Disciplina: PCS 3111 - Laboratorio de Programacao Orientada a Objetos
// 2o semestre de 2017
// 8994178 Marina Scott do Val
// 8039011 Pedro Henrique Lage Furtado de Mendonca

#pragma once
#ifndef H_SERIE
#define H_SERIE

#define NUMERO_MAXIMO_VALORES 10

#include <vector>
#include <string>
#include "ponto.h"



class Serie
{
public:
	// Permite definir o nome, o nomeDoCanalX e o nomeDoCanalY.
	void setNome(std::string nome);
	void setNomeDoCanalX(std::string nomeDoCanalX);
	void setNomeDoCanalY(std::string nomeDoCanalY);

	// Permite obter o nome, o nomeDoCanalX e o nomeDoCanalY.
	std::string getNome() const;
	std::string getNomeDoCanalX() const;
	std::string getNomeDoCanalY() const;

	int getQuantidade() const;

	bool estaVazia() const;

	// Adiciona novo ponto a serie
	void adicionar(double x, double y);

	/**
	* Obtém um ponto representando o limite superior da Serie.
	* A coordenada x desse ponto deve ser o máximo valor horizontal
	* existente na Serie e a coordenada y deve ser o máximo valor
	* vertical existente na Serie.
	*
	* Caso a Serie não tenha valores, deve-se retornar nullptr.
	*/
	Ponto* getLimiteSuperior();

	/**
	* Obtêm um ponto representando o limite inferior da Serie.
	* A coordenada x desse ponto deve ser o mínimo valor horizontal
	* existente na Serie e a coordenada y deve ser o mínimo valor
	* vertical existente na Serie.
	*
	* Caso a serie nao tenha valores, deve-se retornar nullptr.
	*/
	Ponto* getLimiteInferior();
	
	// Retorna o ponto na "posicao" da serie, nullptr se nao existir
	Ponto* getPosicao(int posicao);

	void imprimir() const;
private:

	std::vector<Ponto> myPoints;
	std::string Name   = "DefaultSeriesName";
	std::string CanalX = "DefaultCanalX";
	std::string CanalY = "DefaultCanalY";

	// Criando variaveis no escopo da classe para conter as respostas de
	// getLimiteSuperior getLimiteInferior getPosicao
		// Pois essas funcoes retornam Point* e, se devolverem algo criado no escopo
		// da funcao, esses pontos nao vao existir mais ao sair da funcao.
		// Uma alternativa seria criar algo como
		// void getLimiteInferior(Ponto* Inferior) const;
	// Por esse motivo essas funcoes nao podem ser do tipo CONST, logo serao um getter sem const!!!!!!!
	Ponto* PontoMax;
	Ponto* PontoMin;
	Ponto* PontoPos;
};
#endif

