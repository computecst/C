#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	if(argc==3) printf("%d\n",atoi(argv[1]) + atoi(argv[2]) );
	else{ fprintf(stderr, "Error...!! Debes pasar 2 núm como parametros\n"); exit(1);} // se envia un código de error
}