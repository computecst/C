/* Calcular el área del triangulo, rectángulo, cuadrado*/

#include <stdio.h>
#include <math.h>

void t(int,int);	//triangulo
void r(int,int);	// rectangulo
void c(int);	// cuadrado

int main()
{
	int op = 0;
	printf("1)triangulo\n");
	printf("2)rectángulo\n");
	printf("3)cuadrado\n");

	printf("opción: ");		scanf("%d", &op);
	if(op==1){
		t(4,3);
	}
	else if(op==2){
		r(8,4);
	}
	else if(op==3){
		c(3);
	}
	else{
		printf("opción no valida. ADIOS\n");
	}
}

void c(int lado)
{
	int area = 1;
	area = lado*lado;
	for(int i=1; i<=2; i++){
		area = area * lado;
	}
	printf("%d\n", area);
}

void t(int base, int altura)
{
	float area = 0;
	area = ( (base*altura)/2 );
	printf("%f\n", area);
}

void r(int base, int altura)
{
	int area = 0;
	area = (base*altura);
	printf("%d\n", area);
}
