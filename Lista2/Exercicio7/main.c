#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa na linguagem C que recebe o sal�rio de um funcion�rio de uma empresa.
Ent�o calcule o valor do adicional de f�rias desse empregado. No Brasil, o adicional de f�rias �
1/3 do valor do sal�rio do empregado. Ao final, o programa deve mostrar o valor do adicional de
f�rias e quanto o funcion�rio ir� receber no m�s das f�rias (sal�rio acrescido do adicional de
f�rias).*/

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
