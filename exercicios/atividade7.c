//Faça um algoritmo para mostra os múltiplos de 3 contidos de 1 a 100; (while)
#include <stdlib.h>
#include <stdio.h>

int main(){

	for(int i=1 ; i<=100 ; i++){
		if(i % 3 ==0){
			printf("\n%d", i);
		}
	}

	printf("\n\nAutor: Jairo Abreu - ADS\n");

	return 0;
}