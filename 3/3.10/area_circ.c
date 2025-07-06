#include <stdio.h>
#define PI 3.14

int main () {
	float raio, area;

	printf("Forneça o raio da circunferência: ");
	scanf("%f", &raio);

	area = PI * raio * raio;

	printf("A área da circunferência é: %f\n", area);
	return 0;
}
