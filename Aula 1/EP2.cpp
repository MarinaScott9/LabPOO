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
