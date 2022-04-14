#include <stdlib.h>
#include <stdio.h>

int main(){

    char nome[60], sexo;
    int idade;

    printf("Insira o seu nome: ");
    scanf("%s", nome);

    printf("Insira sua idade: ");
    scanf("%d%*c", &idade);

    printf("Informe seu sexo: M - masculino F - feminino: ");
    scanf("%c", &sexo);

    if ((sexo == 'F' || sexo == 'f') && idade < 25)
      printf("%s: ACEITA", nome);
    else
      printf("%s: NAO ACEITA", nome);

    printf("\n\nAutor: Jairo Abreu - ADS\n");
    return 0;
}