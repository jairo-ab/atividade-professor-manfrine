//Crie um algorítmo que armazene dados de produtos a serem vendidos. O
//usuário deve escolher quais produtos deseja comprar, no final deve mostrar o
//ou os produtos escolhidos, além de mostrar seus valores e o preço final, o
//pagamento e o troco. (print e anexe o resultado provando que foi você que fez).

#include <stdio.h>

//procedimento
void imprimirAutor(){
	printf("\n\nAutor: Jairo Abreu - ADS\n");
}

void menu(){
	printf("\n 1 - pastel e refrigerante R$ 5,00!");
  printf("\n 2 - misto e suco R$ 6,00!");
  printf("\n 3 - x-bacon e refrigerante R$ 10,00!");
  printf("\n Escolha uma das opcoes: ");
}

int main() {

	float valor_receber,
				troco,
				calculo_total,
				op1,
				op2,
				op3;
	int a,op;

    do{

		menu();

		scanf("%d", &a);
		if (a == 1) {
			printf("\nVocê escolheu Salgado com suco!");
			printf("\nValor R$ 5,00");
			op1 = 5.00;
		}
		
		if (a == 2){
			printf("\nVocê escolheu Mixto com suco!");
			printf("\nValor R$ 6,00");
			op2 = 6.00;
		}
		
		if (a == 3){
			printf("\n Você escolheu X-salada com suco!");
			printf("\n Valor R$ 10,00");
			op3 = 10.00;
		}

		printf("\nDigite 1 para continuar\n Ou digite 2 para sair\n Deseja continuar?: ");
		scanf("%d", &op);

	} while(op != 2);

	if (op1 == 5.00 && op2 == 6.00){
		calculo_total = 5.0+6.0;
		printf("\n Valor total é: %.2f",calculo_total);
		printf("\n Insira o valor que voce deseja pagar:");
		scanf("%f",&valor_receber);
		troco = (valor_receber - calculo_total);
		printf("\n seu troco é: %2.f",troco);
	}

	else if (op1 == 5.00 && op2 == 10.00){
		calculo_total = 5.0+10.0;
		printf("\n Valor total é: %.2f",calculo_total);
		printf("\n Insira o valor que voce deseja pagar:");
		scanf("%f",&valor_receber);
		troco = (valor_receber - calculo_total);
		printf("\n seu troco é: %2.f",troco);
	}

	else if (op2 == 6.00 && op3 == 10.00){
		calculo_total = 6.0+10.0;
		printf("\n Valor total é: %.2f",calculo_total);
		printf("\n Insira o valor que voce deseja pagar:");
		scanf("%f",&valor_receber);
		troco = (valor_receber - calculo_total);
		printf("\n seu troco é: %2.f",troco);
	}

	else{
		calculo_total = 5.0+6.0+10.0;
		printf("\n Valor total é: %.2f",calculo_total);
		printf("\n Insira o valor que voce deseja pagar:");
		scanf("%f",&valor_receber);
		troco = (valor_receber - calculo_total);
		printf("\n seu troco é: %2.f",troco);
	}

	imprimirAutor();

	return 0;
}