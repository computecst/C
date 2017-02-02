#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char*argv[]){
	if(argc == 2){
		int fd, nread; //descripto de archivos
		fd = open(argv[1],O_RDONLY); //archivo, solo lectura
		if(fd!=-1){
			//vamos al final del archivo, contamos bytes
			nread = lseek(fd,0,SEEK_END);
			close(fd);
			printf("\nArchivo\n"
				"Bits: %d\t"
				"Kbs: %d\t"
				"Megas: %d\n\n",
				nread*8,nread,nread%1024);
		}
		else printf("Error de lectura");
	} else printf("\nNecesitas pasar la ruta de un archivo\n");
}