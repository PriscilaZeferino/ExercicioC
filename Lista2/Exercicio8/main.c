#include <stdio.h>
#include <stdlib.h>

/*Faça um programa na linguagem C que receba o preço de uma televisão e o número de parcelas
da venda. Calcule o valor de cada parcela considerando que não foram aplicados juros. Então
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
