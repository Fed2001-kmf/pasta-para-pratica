#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "PORTUGUESE");
	int i;
	char nome_aluno[5];
	float nota[5];
	float media_aluno;
	
	for (i = 1; i <= 5; i++){
		printf ("Digite o nome do %d aluno: \n", i);
		scanf ("%s", &nome_aluno[i]);
		
		printf ("Informe a %d nota por favor: \n", i);
		scanf("%f", &nota[i]);
		printf("\n\n");
		media_aluno = nota[i] / 5;
	}
	
	
	printf ("A média %.2f: ", media_aluno);
	
	getch ();
	return 0;
}
