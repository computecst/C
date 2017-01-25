/* Realiza un programa que imprima los números de 0 a n, n debe ser ingresado por el usuario.*/
#include <stdio.h>
int main(){
	int n = 0;
	printf("numN: ");
    scanf("%d", &n); // n contiene el numero que el usuario ingresa
    for(int i=0; i<=n; i++){printf("%d\n", i);} // mientras i es menor o igual a N, se presenta en pantalla estandar el resultado
}