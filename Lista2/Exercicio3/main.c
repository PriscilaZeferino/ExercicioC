#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa na linguagem C que receba 2 n�meros reais (com v�rgula) do usu�rio. Calcule
a divis�o deles e imprima o resultado na tela.*/
int main(int argc, char *argv[]) {
	
	float numero1;
	float numero2;
	float resultadoDivisao;
	
	printf("Informe o primeiro numero: \n");
	scanf("%f", &numero1);
	
	printf("Informe o segundo numero: \n");
	scanf("%f", &numero2);
	
	resultadoDivisao = numero1 / numero2;
	
	printf("O resultado da divisao eh: %f /n", resultadoDivisao);
	
	return 0;
}
