#include <stdio.h>
int main(){
	int x=10;
	char *c = "hola\0";
	for(int i=0; i<10; i++){
		if(c[i]=='\0') break;
		printf("%c\n",c[i]);
	}
}