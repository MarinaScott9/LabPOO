#include <iostream>

// EP 1 - Aula 1
double calcularConsumoDaLampada(int tipo, int horas)
{
	double Pot_kW[4] = { 0.004, 0.010, 0.050 , 0.100 }; //Potencia das lampadas em kW
	return ((double)horas)*Pot_kW[tipo - 1];
}

// EP 2 - Aula 2
int acionarVentilador(bool presencaDetectada, int temperatura)
{
	// Nao detectou presenca
	if (!presencaDetectada) { return 0; }

	// Velocidade 0, 1, 2 para temperaturas <= 20, 25, 32
	if (temperatura <= 20) { return 0; }
	if (temperatura <= 25) { return 1; }
	if (temperatura <= 32) { return 2; }

	// Temperatura >32 entao velocidade 3.
	return 3;
}

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


void Teste_1_Lampadas()
{
	// As horas testadas vao de [0, Hmax*Multiplicador]
		int Multiplicador = 5;
		int Hmax = 20;

	// Como boa pratica de programacao "using" eh usado no menor escopo possível
		// para evitar conflito/colisao de bibliotecas
		using std::cout;
		using std::endl;

	// Print do "titulo"
		cout << "Consumo das lampadas (em kWh) para determinadas horas de uso.\n";
		cout << "----------------------------------------------------\n";
		cout << "Horas \t";

	// Fazer print da primeira linha da tabela
		int Pot_W[4] = { 4, 10, 50, 100 };
		for (int L = 1; L <= 4; L++)
		{
			cout << "Lamp" << L << " (" << Pot_W[L - 1] << "W)" << "\t";
		}
		cout << endl;

	// Preencher a tabela
		for (int H = 0; H <= Hmax; H++)
		{
			cout << Multiplicador*H << "\t";
			for (int L = 1; L <= 4; L++)
			{
				cout << calcularConsumoDaLampada(L, Multiplicador*H) << "\t\t";
			}
			cout << endl;
		}

	return;
}

void Teste_2_Ventilador()
{
	// Como boa pratica de programacao "using" eh usado no menor escopo possível
		// para evitar conflito/colisao de bibliotecas
		using std::cout;
		using std::endl;

	// Faz print da velocidade do ventilador com:
		// Acionado = true e T de [0 a 50]
		for (int T = 0; T <= 50; T++)
		{
			cout << T << " oC\tVelocidade:" << acionarVentilador(true, T) << endl;
		}

	cout << "-----------------------------------------------------------\n";

	// Faz print da velocidade do ventilador com:
		// Acionado = false e T de [0 a 50]
		for (int T = 0; T <= 50; T++)
		{
			cout << T << " oC\tVelocidade:" << acionarVentilador(false, T) << endl;
		}

	return;
}

void Teste_3_Ventiladores()
{
	// Como boa pratica de programacao "using" eh usado no menor escopo possível
		// para evitar conflito/colisao de bibliotecas
		using std::cout;
		using std::endl;

	// Velocidades e horas quaisquer para fazer o teste da funcao
		int velocidades[15] = { 1,1,2,0,3,2,0,1,0, 2, 3, 0, 1, 0, 3 };
		int horas[15] = { 1,2,3,4,0,2,3,1,4,10,11,12,13,14,15 };
		cout << calcularConsumoDoVentilador(velocidades, horas, 15) << endl;
	// O resultado final deve ser a soma dos 3 valores abaixo = 9.185 kWh
		/// Vel 1 = 1+2+1+13	= 17h --> 2.125 kWh
		/// Vel 2 = 3+2+10	= 15h --> 2.250 kWh
		/// Vel 3 = 11+15		= 26h --> 4.810 kWh
	

	return;
}

int main()
{
	Teste_1_Lampadas();
	system("pause");
	system("cls");

	Teste_2_Ventilador();
	system("pause");
	system("cls");

	Teste_3_Ventiladores();
	system("pause");
	system("cls");
}
