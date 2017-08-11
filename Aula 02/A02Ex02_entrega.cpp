#include <iostream>

void calcularMetricas(int consumo[], int quantidade, int* minimo, int* maximo, double& media)
{
	int min = 0, max = 0;
	double mean = 0;

	// configurar min e max em um valor diferente de zero
	if (quantidade > 0) { min = consumo[0]; max = consumo[0]; }

	// Achar elementos minimo, maximo e somar todos os elementos
	for (int i = 0; i < quantidade; i++)
	{
		if (consumo[i] > max) { max = consumo[i]; }
		if (consumo[i] < min) { min = consumo[i]; }
		mean += consumo[i];
	}

	// Dividir pelo total de elementos somados
	mean = mean / (double)quantidade;

	*minimo = min;
	*maximo = max;
	media = mean;

	return;
}
