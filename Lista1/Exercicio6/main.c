#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float salario;	
	float aumento;
	float novoSalario;
	
	printf("Informe o salario atual do funcionario: \n");
	scanf("%f",&salario);
	
	aumento = salario * (35.0/100.0);
	novoSalario = salario + aumento;
	
	printf("Aumento %f /n", aumento);
	printf("O novo salario do funcionario eh: %f \n", novoSalario);
	
	
	return 0;
}
