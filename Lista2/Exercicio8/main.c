#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa na linguagem C que receba o pre�o de uma televis�o e o n�mero de parcelas
da venda. Calcule o valor de cada parcela considerando que n�o foram aplicados juros. Ent�o
mostre o valor da parcela na tela*/

int main(int argc, char *argv[]) {
	
	float preco;
	int parcela;
	float total;
	
	printf("Informe o preco da televisao: \n");
	scanf("%f", &preco);
	
	printf("Informe o numero de parcelas: \n");
	scanf("%d", &parcela);
	
	total = preco/parcela;
	
	printf("Preco da parcela: %f \n", total);
	
	
	return 0;
}
