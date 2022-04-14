#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	char sigla_estado[2];

	printf("\nDigite a sigla de um Estado: ");
	scanf("%s",&sigla_estado);

	if (!strcmp(sigla_estado,"AM") || !strcmp(sigla_estado,"am"))
		printf("\n- Amazonense\n");
	else if (!strcmp(sigla_estado,"SP") || !strcmp(sigla_estado,"sp"))
		printf("\n- Paulista\n");
	else if (!strcmp(sigla_estado,"RJ") || !strcmp(sigla_estado,"rj"))
		printf("\n- Carioca\n");
	else
		printf("\nOutros estado\n");
		printf("\n\n");

	printf("Autor: Jairo Abreu - ADS\n");

  return(0);
}