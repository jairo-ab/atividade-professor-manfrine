//Faça um algoritmo que receba vários números e mostre a quantidade de números
//maiores que 5; (do while)

#include <stdlib.h>
#include <stdio.h>

int main(){

	int num = 0, count = 0, exit;

	do {
		printf("\nInforme um número: ");
		scanf("%d", &num);

		if(num > 5)
			count++;

		printf("\nPara sair, digite 0\nCaso contrario digite 1: ");
		scanf("%d", &exit);

	} while (exit != 0);

	printf("\nQuantidade de numeros informados maiores que 5: %d", count);

	printf("\n\nAutor: Jairo Abreu - ADS\n");

	return 0;
}