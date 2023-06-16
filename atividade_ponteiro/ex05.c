#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tamanho;
int *vetor1, *vetor2;

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "PORTUGUESE");
	int i;
	printf ("\nSeja muito bem-vindo no sistema!!!!!\n\n\n");
	printf ("Escolha o tamanho do vetor por fvr:");
	scanf("%d", &tamanho);
	
	vetor1 = (int *) malloc(sizeof (int)*tamanho);
	vetor2 = (int *) malloc(sizeof (int)*tamanho*2);
	printf ("\n\tVector 1: \n");
	
	for (i = 0; i < tamanho; i++){
		vetor1[i]= pow (2,i);
		printf ("A posição %d: %d\n", i, vetor1[i]);
	}
	
	printf ("\n\tVector 2: \n");
	
	for (i = 0; i < tamanho*2; i++){
		vetor2[i]= pow(3,i);
		printf ("A posição %d: %d\n", i, vetor2[i]);
	}

	system ("Pause");
	return 0;
}
