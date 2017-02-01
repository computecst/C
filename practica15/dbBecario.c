#include <stdio.h>
#include <string.h>
#include <sqlite3.h>

sqlite3 *db;
char *err_msg = 0;
int conexion;

struct becario{
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; //limite de bits
};

void createDB();
void print(struct becario bec);
void new_becario(struct becario bec);

int main(){
	struct becario becarios[8];
	char nombres[][20] = {"Angel", "Fernando", "Diana", "Gonzi", "Saine", "Cristian"};
	char procedencia[][20] = {"Desconocido", "C.U.", "C.U.", "C.U.", "C.U.", "Acatlan"};
	createDB();
	for(int i=0; i<sizeof(nombres)/sizeof(nombres[0]); i++){
		strcpy(becarios[i].nombre,nombres[i]);
		strcpy(becarios[i].procedencia,procedencia[i]);
		becarios[i].promedio = (rand() % 5)*2+1;
		becarios[i].generacion = 11;
		becarios[i].edad = (rand()%11)+15;
		becarios[i].proyecto = i%2;
		print(becarios[i]);
		new_becario(becarios[i]);
	}
	sqlite3_close(db);
	int conexion = 0;
}

void print(struct becario bec){
	printf("\nNombre: %s\n",bec.nombre);
	printf((bec.proyecto&1)?"Proyecto:Si\n":"Proyecto:No\n");
}

void createDB(){
	// se crea una conexión a la DB
	conexion = sqlite3_open("becarios.db",&db);
	// valida si la conexión ha sido exitosa
	if(conexion == SQLITE_OK){
		char *sql = "DROP TABLE IF EXISTS Becarios;"
					"CREATE TABLE Becarios"
					"(Nombre TEXT, Edad INT, Promedio FLOAT,"
					"Procedencia TEXT, Generacion INT, Proyecto TEXT);";
		// ejecutamos el query
		conexion = sqlite3_exec(db,sql,0,0,&err_msg);
		// validamos si el query se ejecuto
		if(conexion == SQLITE_OK) fprintf(stdout,"new table Becarios...!!OK\n");
		else{ // ms de error en el query
			fprintf(stderr, "SQL error: %s\n", err_msg);
			sqlite3_free(err_msg);
		}
	} else{ // la conexión fallo
		fprintf(stderr,"Cant open DB %s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
}

void new_becario(struct becario b){
	char buf[1024];
	snprintf(buf, sizeof buf,"INSERT INTO BECARIOS VALUES('%s',%d,%f,'%s',%d,%d);",
			b.nombre,b.edad,b.promedio,b.procedencia,b.generacion,b.proyecto);
	// ejecutamos el query
	conexion = sqlite3_exec(db,buf,0,0,&err_msg);
	if(conexion == SQLITE_OK) fprintf(stdout,"new becario...!!OK\n");
	else{
		fprintf(stderr, "SQL error: %s\n", err_msg);
		sqlite3_free(err_msg);
	}
}