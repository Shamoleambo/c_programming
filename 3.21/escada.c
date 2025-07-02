#include <stdio.h>
#include <math.h>

int main () {
	float tamanho_escada, altura_quadro, distancia_escada;

	printf("Forneça o tamanho da escada: ");
	scanf("%f", &tamanho_escada);
	printf("Forneça a altura que se deseja pregar o quadro: ");
	scanf("%f", &altura_quadro); 
	
	distancia_escada = sqrt(pow(tamanho_escada, 2) - pow(altura_quadro, 2));

	printf("A distância da escada será: %f\n", distancia_escada);
	return 0;
}
