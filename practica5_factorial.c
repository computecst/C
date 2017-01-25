#include <stdio.h>
int numero = 5; // núm que se toma como base para el calculo del factorial
int r = 0;
factorial(int, int);

int main(){
	r = factorial(1, numero); //invocamos la función factorial
	printf("%d %d\n", numero, r);
}

int factorial(int x, int numero)
{
	if(numero > 0){ // si el numero es mayor a cero, realizamos e proceso de recursividad
		x = factorial(x,numero -1); x = x*numero; 
	}
	else x=1;
	return x;
}
