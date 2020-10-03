#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float salario;
	float novoSalario;
	
	printf("Informe o seu salario atual: \n");
	scanf("%f", &salario);
	
	novoSalario = salario + 252.35;
	
	printf("O novo salario eh: %f \n", novoSalario);
	return 0;
}
