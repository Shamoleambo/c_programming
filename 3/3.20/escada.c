#include <stdio.h>
#include <math.h>
#define PI 3.14

int main () {
	float angulo, altura_parede, angulo_rad, comprimento_escada;

	printf("Forneça o ângulo formado entre a escada e o chão em graus: ");
	scanf("%f", &angulo);
	printf("Forneça a altura da parede: ");
	scanf("%f", &altura_parede);

	angulo_rad = (angulo * PI)/180;
	comprimento_escada = altura_parede / sin(angulo_rad);

	printf("O comprimento da escada será: %f\n", comprimento_escada);
	return 0;
}
