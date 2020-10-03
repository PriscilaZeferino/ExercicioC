#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a;
	int x;
	int y;

	printf("Informe o primeiro numero inteiro: \n");
	scanf("%d", &a);
	
	printf("Informe o segundo numero inteiro: \n");
	scanf("%d", &x);
	
	
	/*Expressao A*/
	y = a * x * x * x + 7;/*Executa primeiro as multiplicacoes e depois soma o resultado com 7*/
	printf("O resultado da expressao y = a * x * x * x + 7 eh: %d \n", y);
	
	/*Expressao B*/
	y = a * x * x * (x + 7);/*Executa a soma de x + 7 e depois as multiplicacoes*/
	printf("O resultado da expressao y = a * x * x * (x + 7) eh: %d \n ", y);
	
	/*Expressao C*/
	y = (a * x) * x * (x + 7);/*Executa primeiro a * x e x + 7 e depois a multiplicao de x pelos valores obtidos */
	printf("O resultado da expressao y = (a * x) * x * (x + 7)  eh: %d \n ", y);
	 
	/*Expressao D*/
	y = (a * x) * x * x + 7;/*Executa primeiro a * x, depois as multiplicacoes, e depois soma 7*/
	printf("O resultado da expressao y = (a * x) * x * x + 7 eh: %d \n ", y);

	/*Expressao E*/
	y = a  * (x * x * x) + 7;/*Executa primeiro a multiplicacao dentro dos parentes, equivalente a potencia de 3, depois multiplica por a e soma 7*/
	printf("O resultado da expressao y = a  * (x * x * x) + 7 eh: %d \n ", y);

	/*Expressao F*/
	y = a * x * (x * x + 7);/*Executa primeiro x * x, depois soma 7, e depois multiplica o resultado pelos demais valores;*/
	printf("O resultado da expressao y = a * x * (x * x + 7) eh: %d \n", y);
	
	/*Resposta do exercicio 9, logo, a expressão de letra e, representa a equacao y=ax^3+7*/
	return 0;
}
