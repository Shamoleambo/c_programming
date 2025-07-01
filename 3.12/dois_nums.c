#include <stdio.h>
#include <math.h>

int main () {
	int num1, num2, res;

	printf("Forneça o primeiro número: ");
	scanf("%d", &num1);
	printf("Forneça o segundo número: ");
	scanf("%d", &num2);

	res = pow(num1, num2);

	printf("%d^%d = %d\n", num1, num2, res);
	return 0;
}
