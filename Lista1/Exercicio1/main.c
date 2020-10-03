#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num1;
	int num2;
	int result;
	
	printf("Informe o primerio numero:\n");
	scanf("%d", &num1);
	
	printf("Informe o segundo numero: \n");
	scanf("%d", &num2);
	
	result = num1 - num2;
	
	printf("O resultado da subtracao eh %d \n", result);
	
	return 0;
}
