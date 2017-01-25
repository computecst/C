/* Realiza un programa que imprima los números primeros n números primos, n debe ser especificado por el usuario.*/
#include <stdio.h>
int main(){
	int n, i = 2;
	printf("numN: ");
    scanf("%d", &n);
    
    while(i <= n)
    {
    	if(i%2 != 0){
    		printf("%d\n", i);
    	}
    	i=i+1;
    }
}