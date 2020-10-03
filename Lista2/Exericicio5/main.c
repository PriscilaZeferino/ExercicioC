#include <stdio.h>
#include <stdlib.h>

/*Faça um programa na linguagem C que receba 1 número inteiro do usuário. Calcule o seu
sucessor e antecessor. Então imprima os números na tela*/

int main(int argc, char *argv[]) {
	
	int numero;
	int antecessor;
	int sucessor;
	
	printf("Informe um numero qualquer: \n");
	scanf("%d", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("Numero escolhido: %d \n", numero);
	printf("O sucessor de %d eh: %d \n", numero, sucessor);
	printf("O antecessor de %d eh: %d \n", numero, antecessor);
	
	
	return 0;
}
