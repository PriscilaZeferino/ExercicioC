#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa na linguagem C que receba 2 n�meros com v�rgulas. Calcule a m�dia desses
valores. Ent�o imprima a m�dia desses n�meros.*/
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
