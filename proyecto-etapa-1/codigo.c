#include <stdio.h>

int main() {
	int option;
	
	// Variable information student
	int matriculaStudent;
	char nameStudent[50];
	char fathersNameStudent[50]; 
	char mothersNameStudent[50];
	char career[50];
	char correo[50];
	int numberPhone;
	
	printf("Hola bienvenido al catalogo de administracion, ingrese una opcion: \n");
	printf("1. Alta de estudiantes \n");
	printf("2. Baja de estudiantes \n");
	printf("3. Modificaciones de estudiantes \n");
	printf("4. Busquedas de estudiantes \n");
	printf("5. Salir \n");
	scanf("%d", &option);
	
	if(option == 1) {
		
		printf("Ingrese la matricula del estudiante \n");
		scanf("%d", &matriculaStudent);
		printf("Ingrese el nombre \n");
		scanf("%s", &nameStudent);
		printf("Ingrese al apellido paterno \n");
		scanf("%s", &fathersNameStudent);
		printf("Ingrese el apellido materno \n");
		scanf("%s", &mothersNameStudent);
		printf("Ingrese la carrera \n");
		scanf("%s", &career);
		printf("Ingrese el correo electrónico \n");
		scanf("%s", &correo);
		printf("Ingrese el teléfono \n ");
		scanf("%s", &numberPhone);
		
		printf("Datos del estudiante \n");
		printf("Matricula: %d \n", matriculaStudent);
		printf("Nombre: %s \n", nameStudent);
		printf("Apellido paterno: %s \n", fathersNameStudent);
		printf("Apellido materno: %s \n", mothersNameStudent);
		printf("Carrera: %s \n", career);
		printf("Correo: %s \n", correo);
		printf("Numero de telefono: %s \n", numberPhone);
		
		
	} else if (option == 2) {
		printf("Estas en la opcion 2");
	} else if (option == 3) {
		printf("Estas en la opcion 3");
	} else if (option == 4) {
		printf("Estas en la opcion 4");
	} else if (option == 5) {
		printf("Saliendo");
	} else
		printf("Error! Ese valor no existe");
	
	return 0;
}