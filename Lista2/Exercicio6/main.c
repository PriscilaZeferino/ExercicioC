#include <stdio.h>
#include <stdlib.h>

/*Faça um programa na linguagem C que receba 2 números com vírgulas. Calcule a média desses
valores. Então imprima a média desses números.*/
int main(int argc, char *argv[]) {
	
	float numero1;
	float numero2;
	
	printf("Informe o primeiro numero: \n");
	scanf("%f", &numero1);
	
	printf("Informeo segundo numero: \n");
	scanf("%f", &numero2);
	
	float media;
	media = (numero1 + numero2)/2;
	
	printf("A media eh: %f \n", media);
	
	return 0;
}
