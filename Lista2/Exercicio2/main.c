#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa na linguagem C que receba 2 n�meros inteiros do usu�rio. Calcule a
multiplica��o deles e imprima o resultado na tela*/

int main(int argc, char *argv[]) {
	
	int numero1;
	int numero2;
	int resultadoMultiplicacao;
	
	printf("Informe o primeiro numero: \n");
	scanf("%d",&numero1);
	
	printf("Informe o segundo numero: \n");
	scanf("%d", &numero2);
	
	resultadoMultiplicacao = numero1 * numero2;
	
	printf("O resultado da multiplicacao eh: %d \n", resultadoMultiplicacao);
	return 0;
}
