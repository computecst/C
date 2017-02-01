#include <stdio.h>	//entrada y salida estandar
#include <stdlib.h>	//manejo de memoria dinamica
#include <fcntl.h>	//manejo archivos
int main(){
	int file = open("/dev/random", O_RDONLY); //solo lectura
	int cont;
	// se lee bytes a bytes del archivo asociado con el descriptor de archivos
	#if 0
	## Parametros de la funcion read() ##
	-descriptor de archivo
	-dirección de la variable en la que se almacenaran los bytes leídos
	-y los bytes a leer
	# endif
	int randomNum = read(file, &cont, sizeof(int)); 
	printf("\n%u\n",cont);
	close(file);
}
