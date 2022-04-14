//Desenvolver um algoritmo que efetue a soma de todos os números ímpares que
//são múltiplos de 3 e que se encontram no conjunto dos números de 15 até 250
#include <stdlib.h>
#include <stdio.h>

int main(){
	int soma = 0, count = 0;

	for(int i = 15; i <= 250; i++){
		if((i % 2 != 0) && i % 3 == 0){
			count++;
			soma += i;
		}
	}

	printf("A soma dos números ímpares e múltipos de 3 são: %d\n", soma);
	printf("\nA contagem dos números ímpares e de: %d", count);

	printf("\n\nAutor: Jairo Abreu - ADS\n");

	return 0;
}