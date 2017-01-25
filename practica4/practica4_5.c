/* Realiza un programa de autenticación, es decir que acepte un “password”, de ser correcto, imprimir “OK” de lo contrario imprimir, “GTFOH!”*/
#include <stdio.h>
int main() {
	char user[8], pass[8];
	printf("user: ");	scanf("%s", user);
	printf("pass: ");	scanf("%s", pass);
	if(!strcmp(user,"omar") && !strcmp(pass,"c")) printf("O.K. \n");
	else printf("“GTFOH! \n");
	return 0;
}