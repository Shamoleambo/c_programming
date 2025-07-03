#include <stdio.h>

int main () {
	int hora_int, minutos;
	float tempo, hora_frac;

	printf("Forneça a hora como um número real: ");
	scanf("%f", &tempo);

	hora_int = tempo / 1;
	hora_frac = (tempo - hora_int) * 100;

	minutos = hora_int * 60 + hora_frac;

	printf("Hora em minutos: %d\n", minutos);

	return 0;
}
