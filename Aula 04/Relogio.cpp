#include "Relogio.h"

void Relogio::sincronizar(Relogio * r)
{
	hora = r->getHora();
	minuto = r->getMinuto();

	return;
}

void Relogio::setHora(int h) {
	hora = h; return;
}

void Relogio::setMinuto(int m)
{
	minuto = m; return;
}

int Relogio::getHora() const
{
	return hora;
}

int Relogio::getMinuto() const
{
	return minuto;
}
