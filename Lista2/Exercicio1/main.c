#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa na linguagem C que receba 2 n�meros inteiros do usu�rio. Calcule a soma
deles e imprima o resultado na tela.*/
int main(int argc, char *argv[]) {
	
	int numero1;
	int numero2;
	int resultadoSoma;
	
	printf("Informe o primeiro numero: \n");
	scanf("%d",&numero1);
	
	printf("Informe o segundo numero: \n");
	scanf("%d",&numero2);
	
	resultadoSoma = numero1 + numero2;
	
	printf("O resultado da soma dos dois numero eh: %d", resultadoSoma);
	
	return 0;
}
