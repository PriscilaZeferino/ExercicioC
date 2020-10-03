#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Informe a segunda nota: \n");
	scanf("%f", &nota2);
	
	printf("Informe a terceira nota: \n");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	printf("A media eh %f \n", media);
	
	return 0;
}
