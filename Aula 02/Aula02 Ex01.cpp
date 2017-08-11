#include <iostream>

/* IMPLEMENTAR FUNCAO */
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

/* NAO ENTREGAR O MAIN */
int main() {
	using std::cout;
	using std::endl;

	int arranjo[] = {10, 20, 40, 50, 55, 60};
	int *posicao;

	/**/
	for (int i = 0; i <= 7; i++)
	{
		posicao = procurarConsumo(i * 10, arranjo, 6);
		if (posicao != nullptr)
		{
			cout << "Posicao " << posicao << " Valor " << *posicao << endl;
		}
		else
		{
			cout << "Posicao nullptr" << " Valor " << i*10 << endl;
		}
	}
	/**/
	system("pause");
	return 0;
}
