#include <iostream>

int* procurarConsumo (int valor, int consumo[], int quantidade)
{
	for (int i = 0; i < quantidade; i++)
	{
		if (consumo[i] == valor)
		{
			return &consumo[i];
		}
	}

	return nullptr;
}
