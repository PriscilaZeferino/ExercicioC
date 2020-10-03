#include <stdio.h>
#include <stdlib.h>

/*Faça um programa na linguagem C que recebe o salário de um funcionário de uma empresa.
Então calcule o valor do adicional de férias desse empregado. No Brasil, o adicional de férias é
1/3 do valor do salário do empregado. Ao final, o programa deve mostrar o valor do adicional de
férias e quanto o funcionário irá receber no mês das férias (salário acrescido do adicional de
férias).*/

int main(int argc, char *argv[]) {
	
	float salario;
	float adicional;
	float salarioFerias;
	
	printf("Informe o salario do funcionario: \n");
	scanf("%f", &salario);
	
	adicional = salario/3;
	
	salarioFerias = salario + adicional;
	
	printf("O valor adicional eh: %f \n", adicional);
	printf("O salario das ferias eh: %f \n", salarioFerias);
	return 0;
}
