#include <stdio.h>

int main () {
	int nasc, atual, idade, idade_fut;

	printf("Forneça o ano de nascimento da pessoa: ");
	scanf("%d", &nasc);
	printf("Forneça o ano atual: ");
	scanf("%d", &atual);

	idade = atual - nasc;
	idade_fut = 2050 - nasc;

	printf("Idade atual: %d\n", idade);
	printf("Idade em 2050: %d\n", idade_fut);
	return 0;
}
