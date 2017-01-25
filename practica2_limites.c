#include <stdio.h>
#include "limits.h"
char *cadena = "Tipos de Datos\n";
void imprimir(){
	printf("max_signed_char: %u \n", SCHAR_MAX);
	printf("max_signed_short_int: %u \n", SHRT_MIN);
	printf("max_signed_long_int: %u \n", LONG_MAX);
	printf("max_unsigned_long_int: %u \n", ULONG_MAX);
	printf("max_signed_long_long_int: %u \n", LLONG_MAX);
}

int main(){
	printf("%s", cadena);
	imprimir();
}