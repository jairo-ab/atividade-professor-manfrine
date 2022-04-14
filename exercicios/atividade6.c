// 1. Escrever um algoritmo que leia uma quantidade desconhecida de
// números e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50],
// [51-75] e [76-100]. A entrada de dados deve terminar quando for lido um
// número negativo

#include <stdlib.h>
#include <stdio.h>

int main(){

	int intervalo1 = 0, 
			intervalo2 = 0, 
			intervalo3 = 0, 
			intervalo4 = 0,
			value;

	while (value > 0) {
		printf("\nInforma um número aleatorio: ");
		scanf("%d", &value);

		if (value >= 0 && value <=25)
			intervalo1++;

		if (value >= 26 && value <=50)
			intervalo2++;

		if (value >= 51 && value <=75)
			intervalo3++;

		if (value >= 76 && value <=100)
			intervalo4++;
	}

	printf("Lista dos Valores");
	printf("\nIntervalo [0-25]: %d", intervalo1);
	printf("\nIntervalo [26-50]: %d", intervalo2);
	printf("\nIntervalo [51-75]: %d", intervalo3);
	printf("\nIntervalo [76-100]: %d\n", intervalo4);

	printf("\n\nAutor: Jairo Abreu - ADS\n");

	return 0;
}