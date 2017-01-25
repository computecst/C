#include <stdio.h>
#include <string.h>
int main(){
	char a[]={'a','b','c','d','e','f','g','h','i','j','k'};
	for(int i=0; i<= sizeof(a) / sizeof(char); i++)
		printf("%c\n", a[i] ^ 4);
}