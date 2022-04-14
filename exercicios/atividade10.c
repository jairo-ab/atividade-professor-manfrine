//Crie um algorítmo que aplique pelo menos 2 funções e 1 procedimento criado
//por você. (questões idênticas serão anuladas) (print e anexe o resultado
//provando que foi você que fez).

#include <stdlib.h>
#include <stdio.h>

//variaveis globais
int num1, num2, operacao;

//função 1
void soma(int n1, int n2, int op){

	switch (op) {
		case 1:
			printf("A soma dos numeros e: %d", n1 + n2);
			break;
		case 2:
			printf("A subtracao dos numeros e: %d", n1 - n2);
			break;
		case 3:
			printf("A multiplicacao dos numeros e: %d", n1 * n2);
			break;
		case 4:
			printf("A divisao dos numeros e: %d", n1 / n2);
			break;
		default:
			printf("Valor não reconhecido");
			break;
	}
}

//função 2
void menu(){
	printf("\nInforme o primeiro número para calcularmos: ");
	scanf("%d", &num1);

	printf("\nInforme o segundo número para calcularmos: ");
	scanf("%d", &num2);

	printf("\nAgora informe com o número da opção que deseja realizar");
	printf("\n1) Adição");
	printf("\n2) Subtração");
	printf("\n3) Multiplicação");
	printf("\n4) Divisão");
	printf("\nOpção: ");
	scanf("%d", &operacao);
}

//procedimento
void imprimirAutor(){
	printf("\n\nAutor: Jairo Abreu - ADS\n");
}

int main(){

	menu();
	soma(num1, num2, operacao);
	imprimirAutor();

	return 0;
}