#include <stdio.h>

int main(){
	float altura, resultado;
	int peso;

	printf("Informe sua altura em (metros): ");
	scanf("%f", &altura);

	printf("\nInforme seu peso em (kg): ");
	scanf("%d", &peso);

	resultado = peso / (altura * altura);

	if(resultado < 18.5){
		printf("\nAbaixo do peso.");
	}

	if(resultado >= 18.5 && resultado < 25){
		printf("\nPeso normal.");
	}

	if(resultado >= 25 && resultado < 30){
		printf("\nAcima do Peso.");
	}

	if(resultado >= 30){
		printf("\nObeso.");
	}

	printf("\n\nAutor: Jairo Abreu - ADS\n");

	return 0;
}