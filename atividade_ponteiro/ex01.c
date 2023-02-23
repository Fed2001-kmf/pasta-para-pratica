#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int * ptr_fed;
	ptr_fed = (int *) malloc(sizeof (int));
	*ptr_fed = 42;
	
	printf ("Endereço : %p\nvalor: %d\n\n", ptr_fed, *ptr_fed);
	
	system ("Pause");
	return 0;
}
