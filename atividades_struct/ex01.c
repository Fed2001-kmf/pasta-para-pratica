#include <stdio.h>
#include <stdlib.h>
#define tamanho 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Minha estrutura do livro
struct tlivro {
	int cod;
	char nome[50];
	char autor[50];
};

int main(int argc, char *argv[]) {
	//Minha estrutura da pilha
	struct tpilha{
		tlivro dados[tamanho];
		int ini;
		int fim;
	};
	//Variáveis globais 
	tpilha pilha;
	
	//Vamos adicionar um elemento no final da pilha
	void pilha_entrar (){
		if (pilha.fim == tamanho){
			printf ("\nA pilha está cheia, impossível empilhar!\n\n");
			
			system ("Pause");
		}
		else {
			printf ("\nDigite o código do livro por favor: ");
			scanf ("%d", &pilha.dados[pilha.fim].cod);
			printf ("\nDigite o nome do livro por favor: ");
			scanf ("%s", &pilha.dados[pilha.fim].nome);
			printf ("\nDigite o nome do autor por favor: ");
			scanf ("%s", &pilha.dados[pilha.fim].autor);
			
			pilha.fim++;
		}
	}
	
	//Retirar o último elemento da pilha
	void pilha_sair (){
		if (pilha.ini == pilha.fim){
			printf ("\nA pilha está vazia, impossível desempilhar!\n\n");
			system ("Pause);
		}
		else {
			pilha.dados[pilha.fim-1].cod = 0;
			strcpy (pilha.dados[pilha.fim-1].nome, "");
			strcpy (pilha.dados[pilha.fim-1].autor, "");
			pilha.fim--;
		}
	}
	
	
	//Mostrar o conteúdo da pilha
	void pilha_mostrar (){
		int i;
		printf ("[");
		for (i = 0; i < tamanho; i++){
			printf ("%d", pilha.dados[i].cod;)
		}
		
		printf ("]\n\n");
	}
	return 0;
}
