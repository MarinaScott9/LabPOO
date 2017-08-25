#include "Lampada.h"

void Lampada::setConsumoDeEnergia(double consumo)
{
	consumoDeEnergia = consumo;
}

void Lampada::ligar()
{
	ligada = true; return;
}

void Lampada::desligar()
{
	ligada = false; return;
}

void Lampada::programar(Relogio * hInicio, Relogio * hFinal)
{
	horaDeLigar = hInicio;
	horaDeDesligar = hFinal;
	programada = true;
	return;
}

void Lampada::desprogramar()
{
	horaDeDesligar = nullptr;
	horaDeLigar = nullptr;
	programada = false; return;
}

void Lampada::atualizar(Relogio * hAtual)
{
	if (!programada) { return; }

	int AtualH = hAtual->getHora();
	int AtualM = hAtual->getMinuto();
	int LigarH = horaDeLigar->getHora();
	int LigarM = horaDeLigar->getMinuto();
	int DesligarH = horaDeDesligar->getHora();
	int DesligarM = horaDeDesligar->getMinuto();


	// Se for ANTES do horario de ligar, return
	if (AtualH < LigarH) { return; }
	if ((AtualH == LigarH) && (AtualM < LigarM)) { return; }

	// Se for DEPOIS do horario de desligar, desliga e return
	if (AtualH > DesligarH) { ligada = false; return; }
	if ((AtualH == DesligarH) && (AtualM > DesligarM)) { ligada = false; return; }

	// Nao deu return ate agora --> Ta na hora de ligar
		//LigadaHM <= AtualHM <= DesligadaHM
	ligada = true;
	return;
}

bool Lampada::isLigada() const
{
	return ligada;
}

bool Lampada::isProgramada() const
{
	return programada;
}

void Lampada::imprimir() const
{
	// Usando "using" no menor escopo possivel e sem usar o namespace inteiro
	// Isso evita conflito entre bibliotecas e eh uma boa pratica de programacao
	using std::cout;
	using std::endl;
	cout << "<<Lampada>>\n";
	cout << "consumo (kWh):\t\t" << consumoDeEnergia << endl;
	cout << "ligada:\t\t\t" << ligada << endl;
	cout << "programada:\t\t" << programada << endl;
	cout << "hora de ligar:\t\t" << horaDeLigar->getHora() << ":" << horaDeLigar->getMinuto() << endl;
	cout << "hora de desligar:\t" << horaDeDesligar->getHora() << ":" << horaDeDesligar->getMinuto() << endl;

}
