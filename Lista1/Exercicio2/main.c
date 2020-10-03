#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num1;
	int num2;
	int num3;
	int num4;
	int resultSoma;
	
	printf("Informe o primeiro numero: \n");
	scanf("%d", &num1);
	
	printf("Informe o segundo numero: \n");
	scanf("%d", &num2);
	
	printf("Informe o terceiro numero: \n");
	scanf("%d", &num3);
	
	printf("Informe o quarto numero: \n");
	scanf("%d", &num4);
	
	resultSoma = num1 + num2 + num3 + num4;
	
	printf("O resultado da soma eh: %d \n", resultSoma);
	
	return 0;
}
