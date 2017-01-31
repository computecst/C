#include <stdio.h>
#include <string.h>

struct becario {
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; // con el : indicamos que es un campo de bit, esta variable solo ocupa 1 bit
};
void print(struct becario bec);

int main() {
	struct becario becarios[8]; //arreglo de tipo becario
	char nombres[][20] = {"Angel", "Fernando", "Diana", "Gonzi", "Saine", "Cristian"};
	char procedencia[][20] = {"Desconocido", "C.U.", "C.U.", "C.U.", "C.U.", "Acatlan"};

	for(int i=0; i<sizeof(nombres)/sizeof(nombres[0]); i++){
		strcpy(becarios[i].nombre,nombres[i]);
		strcpy(becarios[i].procedencia,procedencia[i]);
		becarios[i].promedio = (rand() % 5)*2+1;
		becarios[i].generacion = 11;
		becarios[i].edad = (rand()%11)+15;
		becarios[i].proyecto = i%2;
		print(becarios[i]);
	}
}
void print(struct becario bec) {
	printf("\nNombre: %s\n",bec.nombre);
	printf("Procedencia: %s\n",bec.procedencia);
	printf("Promedio: %.1f\n",bec.promedio);
	printf("Generacion %d\n",bec.generacion);
	printf("Edad: %d\n",bec.edad);
	printf((bec.proyecto&1)?"\nProyecto:Si":"Proyecto:No\n");
}