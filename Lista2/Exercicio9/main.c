#include <stdio.h>
#include <stdlib.h>

/*Faça um programa na linguagem C para um pequeno cinema. Considerando que existem 2 tipos
de ingresso: inteiro e meio. O seu programa deve receber do usuário o número total pagantes
de ingresso inteiro, o valor do ingresso inteiro, total de pagantes de meio ingresso e o valor de
meio ingresso. Calcule quanto dinheiro foi recebido com a venda dos ingressos. Mostre o valor
total de dinheiro arrecadado.*/

int main(int argc, char *argv[]) {
	
	float ingresso;	
	printf("Informe o valor do ingresso inteiro: \n");
	scanf("%f", &ingresso);
	
	float meioIngresso;
	printf("Informe o valor de meio ingresso: \n");
	scanf("%f", &meioIngresso);
	
	float pagantesInteiro;
	printf("Informe o numero de pessoas que pagaram o valor inteiro do ingreso: \n");
	scanf("%f", &pagantesInteiro);
	
	float pagantesMeio;
	printf("Informe o numero de pessoas que pagaram meio ingresso: \n");
	scanf("%f", &pagantesMeio);
	
	float valorArrecadado;
	valorArrecadado = (ingresso * pagantesInteiro) + (meioIngresso * pagantesMeio);
	
	printf("Valor total arrecadado: %f \n", valorArrecadado);
	return 0;
}
