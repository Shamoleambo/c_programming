#include <stdio.h>
#include <math.h>

int main () {
	float num, num_2, num_3, sqrt_num, cub_num;
	
	printf("Forneça um número: ");
	scanf("%f", &num);

	num_2 = num * num;
	num_3 = num * num * num;
	sqrt_num = sqrt(num);
	cub_num = cbrt(num);

	printf("%f^2 = %f\n", num, num_2);
	printf("%f^3 = %f\n", num, num_3);
	printf("%f^1/2 = %f\n", num, sqrt_num);
	printf("%f^1/3 = %f\n", num, cub_num);
	return 0;
}
