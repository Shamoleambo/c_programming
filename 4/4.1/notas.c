#include <stdio.h>
#define PESO_TRAB 2
#define PESO_AVAL_SEM 3
#define PESO_EX_FINAL 5

int main () {
	float n_trab, n_aval_sem, n_ex_final, media;

	printf("Forneça a nota do trabalho: ");
	scanf("%f", &n_trab);
	printf("Forneça a nota da avaliação semestral: ");
	scanf("%f", &n_aval_sem);
	printf("Forneça a nota do exame final: ");
	scanf("%f", &n_ex_final);

	media = (PESO_TRAB * n_trab + PESO_AVAL_SEM * n_aval_sem + PESO_EX_FINAL * n_ex_final) / (PESO_TRAB + PESO_AVAL_SEM + PESO_EX_FINAL);

	if(media >= 8 && media <= 10) {
		printf("Conceito: A\n");
	} else if (media < 8 && media >= 7){
		printf("Conceito: B\n");
	} else if (media < 7 && media >= 6){
		printf("Conceito: C\n");
	} else if (media < 6 && media >= 5){
		printf("Conceito: D\n");
	} else if (media < 5 && media >= 0){
		printf("Conceito: F\n");
	}

	return 0;
}
