#include <stdio.h>
#include <math.h>

int main () {
	int convites;
	float custo, preco_convite;

	printf("Forneça o custo da peça de teatro: ");
	scanf("%f", &custo);
	printf("Forneça o preço do convite: ");
	scanf("%f", &preco_convite);

	convites = ceil(custo / preco_convite);

	printf("A quantidade de convites deverá ser: %d\n", convites);
	return 0;
}
