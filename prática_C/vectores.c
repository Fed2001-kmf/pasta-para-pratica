#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	setlocale (LC_ALL, "PORTUGUESE");
	int i;
	char nome[3];
	float nota1[3], nota2[3], media;
	
	for (i=1; i<=3; i++){
		printf("Digite o seu nome: ");
		scanf ("%s", &nome[i]);
	
		printf ("Informe a sua primeira nota: ");
		scanf ("%f", &nota1[i]);
		printf ("Informe a sua segunda nota: ");
		scanf ("%f", &nota2[i]);
		printf ("\n\n");
		media = (nota1[i] + nota2[i]) / 2;
		
	}
	
	printf ("A sua média = %.1f:\n", media);
	return 0;
}
