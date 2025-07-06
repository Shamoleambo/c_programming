#include <stdio.h>

int main () {
	float nota_1, nota_2, nota_3, media, nota_exame;

	printf("Forneça a primeira nota: ");
	scanf("%f", &nota_1);
	printf("Forneça a segunda nota: ");
	scanf("%f", &nota_2);
	printf("Forneça a terceira nota: ");
	scanf("%f", &nota_3);

	media = (nota_1 + nota_2 + nota_3) / 3;
	
	if (media >= 7 && media <=10) {
		printf("Aprovado\n");
	} else if (media < 7 && media >= 3){
		printf("Exame\n");
		nota_exame = 12 - media;
		printf("A nota miníma necessária para aprovação é: %f\n", nota_exame);
	} else if(media < 3 && media >= 0) {
		printf("Reprovado\n");
	}
	return 0;
}
