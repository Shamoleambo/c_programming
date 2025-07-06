#include <stdio.h>
#include <math.h>

int main () {
	int num_int;
	float num, num_frac, round_num;

	printf("Forneça um número: ");
	scanf("%f", &num);

	num_int = num / 1;
	num_frac = num - num_int;
	round_num = round(num);

	printf("Parte inteira do número: %d\n", num_int);
	printf("Parte fracionária do número: %f\n", num_frac);
	printf("Arredondamento do número %f: %f\n", num, round_num);

	return 0;
}
