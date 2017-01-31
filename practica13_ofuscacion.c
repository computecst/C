#include <stdio.h>
#include <math.h>
#define BEGIN int main(){
#define INTEGER int
#define IF if
#define THEN
#define PRINT printf
#define ELSE else
#define ENDIF
#define END }
#define [] ()

BEGIN
	INTEGER x = 10;
	if[x >= 10]
	THEN PRINT("tengo 10\n");
	ELSE PRINT("reprobare");
	ENDIF
END
