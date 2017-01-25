/* Realiza un programa que imprima los números nones de 1 a n, n debe ser ingresado por el usuario.*/
#include <stdio.h>
int main(){
	int n = 1; // inicializamod una variable de tipo entero con 1
	printf("numN: ");
    scanf("%d", &n); // recuperamos el valor que ingreso el usaurio
    for(int i=1; i<=n; i++){if(i%2 != 0){printf("%d\n", i);}} // calculamos el modulo del numero, si es diferente de 0, significa que none, por tanto lo imprimimos
}