/* Programa em C que armazena 10 números inteiros fornecidos pelo usuário em um vetor NUM
e imprime uma lista dos números lidos */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int i, num[15];
	
	//lendo os valores
	for (i=0; i<15; i++) {
		printf("Informe um número: \n");
		scanf("%d, &num[i]");
	}
	//Imprimindo os valores
	for (i=0; i<15; i++) {
		printf("Numero: %d \n", num[i]);
	}
}