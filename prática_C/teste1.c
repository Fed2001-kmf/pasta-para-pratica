#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "PORTUGUESE");
	int valor[5], i;
	float adicao[10], resultado1[5],resultado2[10];
	
	for (i = 0; i <= 5; i++){
		printf ("Informe um valor: \n");
		scanf ("%d", &valor[i]);
	}
	printf ("Valor 1 :%d\n", &valor[0]);
	printf ("Valor 2 :%d\n", &valor[1]);
	printf ("Valor 3 :%d\n", &valor[2]);
	printf ("Valor 4 :%d\n", &valor[3]);
	printf ("Valor 5 :%d\n", &valor[4]);
	resultado1[i] = valor[1] + 6;
	printf ("Resultado 1:%.2f\n\n", &resultado1);
	
	for (i = 1; i <= 10; i++){
		printf ("Sua adição:\n", &adicao[i]);
		scanf ("%f", &adicao);
	}
	resultado2[i] = adicao[2] + 5;
	printf ("Resultado 2:%.2f\n\n", &resultado2[i]);
	
	
	return 0;
}
