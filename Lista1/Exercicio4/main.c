#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1;
	int num2;
	int soma;
	int subtracao;
	int divisao;
	int multiplicacao;
	
	printf("Informe o primeiro numero: \n");
	scanf("%d", &num1);
	
	printf("Informe o segundo numero: \n");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	subtracao = num1 - num2;
	divisao = num1 / num2;
	multiplicacao = num1 * num2;
	
	printf("A soma eh: %d \n",soma);
	printf("A subtracao eh: %d \n", subtracao);
	printf("A divisao eh: %d \n", divisao);
	printf("A multiplicao eh: %d \n", multiplicacao);
	
	return 0;
}
