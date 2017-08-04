// EP 3 - Aula 3
double calcularConsumoDoVentilador(int velocidade[], int horas[], int quantidadeDeValores)
{
	double Pot_kW[4]{ 0.0, 0.125, 0.150, 0.185 };
	double Consumo_kW = 0.0;

	for (int i = 0; i < quantidadeDeValores; i++)
	{
		// Soma o consumo iterativo para cada velocidade*horas de uso
		Consumo_kW += ((double)horas[i] * 1.0) * Pot_kW[velocidade[i]];
	}
	return Consumo_kW;
}
