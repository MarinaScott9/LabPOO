#pragma once
#ifndef H_RELOGIO
#define H_RELOGIO

class Relogio
{
public:
	void sincronizar(Relogio *r);

	void setHora(int h);
	void setMinuto(int m);

	// Getters (CONST pois getters nao devem modificar nada)
	int getHora() const;
	int getMinuto() const;

private:
	int hora = 0;
	int minuto = 0;

};

#endif
