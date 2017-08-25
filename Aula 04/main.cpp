#include "main.h"

int main() {
	Lampada *lamp1 = new Lampada();
	Relogio *inicio = new Relogio();
	Relogio *fim = new Relogio();
	Relogio *atual = new Relogio();

	inicio->setHora(10);
	inicio->setMinuto(0);

	fim->setHora(12);
	fim->setMinuto(0);

	atual->setHora(11);
	atual->setMinuto(00);

	lamp1->setConsumoDeEnergia(100);
	lamp1->programar(inicio, fim);
	lamp1->imprimir();

	std::cout << "\n\n";

	lamp1->atualizar(atual);
	lamp1->imprimir();

	std::cout << "\n\n";

	system("pause");
	return 0;
}