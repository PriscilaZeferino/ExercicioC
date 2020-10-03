#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float salario;
	float percentual;
	float aumento;
	float novoSalario;
	
	printf("Informe o salario atual: \n");
	scanf("%f", &salario);
	
	printf("Informe o percentual de aumento: \n");
	scanf("%f", &percentual);
	
	aumento = salario * (percentual/100.0);
	novoSalario = salario + aumento;
	
	printf("O aumento foi de %f reais \n", aumento);
	printf("O novo salario eh %f reais \n", novoSalario);
	return 0;
}
