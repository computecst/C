#include <stdio.h>
#include <stdlib.h>
// la ejecución cuenta como un parametro
//recibe numero de argumentos, argumentos
int main(int argc, char *argv[]){
	if(argc<2){
		fprintf(stderr,"Se necesita un argumento!"); // fprintf --> funcion que imprime errores
		exit(1349); // se envia un código de error
	}	
	printf("%d\n",atoi(argv[argc-1])); // se imprime el ultimo argumento
}