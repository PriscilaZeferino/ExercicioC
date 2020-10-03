#include <stdio.h>
#include <stdlib.h>

/*Faça um programa na linguagem C para um pequeno comerciante. O programa deve receber o
preço do produto e quantidade de unidades que o cliente irá comprar. Calcule o valor total a ser
cobrado cliente. Mostre o valor total na tela do computador.*/
int main(int argc, char *argv[]) {
	
	float precoProduto;
	int qtdDeProdutos;
	float precoTotal;
	
	printf("Informe o valor do produto: \n");
	scanf("%f", &precoProduto);
	
	printf("Informe a quantidade do produto: \n");
	scanf("%d",&qtdDeProdutos);
	
	precoTotal = precoProduto * qtdDeProdutos;
	
	printf("O preco total da compra eh: %f", precoTotal);
	
	return 0;
}
