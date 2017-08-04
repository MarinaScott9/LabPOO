// EP 1 - Aula 1
double calcularConsumoDaLampada(int tipo, int horas)
{
	double Pot_kW[4] = { 0.004, 0.010, 0.050 , 0.100 }; //Potencia das lampadas em kW
	return ((double)horas)*Pot_kW[tipo - 1];
}
