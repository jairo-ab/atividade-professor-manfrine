#include <stdlib.h>
#include <stdio.h>

int main(){

	int subir = 20, descer = 11;
	int dia = 0, dias = 0;

	dia = subir - descer;
	// em um dia a aranha sobe 9 cm
	// 1 metro é igaul a 100 cm
	//então: 18 metros é igual a 1800 cm

	dias = 1800 / dia;

	printf("A aranha chegará em %d dias no topo.", dias);

	return 0;
}