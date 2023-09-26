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
	char numberPhone[50];
	
	printf("Hola bienvenido al catalogo de administracion, ingrese una opcion: \n");
	printf("1. Alta de estudiantes \n");
	printf("2. Baja de estudiantes \n");
	printf("3. Modificaciones de estudiantes \n");
	printf("4. Busquedas de estudiantes \n");
	printf("5. Salir \n");
	scanf("%d", &option);
	
	if(option == 1) {
		
		char* dataDescriptions[] {
			"Matricula",
			"Nombre",
			"apellido paterno",
			"apellido materno",
			"carrera",
			"correo electronico",
			"numero"
		};
		
		
		void* dataPointers[] {
			&matriculaStudent,
			nameStudent,
			fathersNameStudent,
			mothersNameStudent,
			career,
			correo,
			numberPhone
		};
		
		for(int i = 0; i < sizeof(dataDescriptions) / sizeof(dataPointers[0]); i++) {
			printf("Ingrese %s del estudiante: ", dataDescriptions[i]);
			scanf("%s", dataPointers[i]);
		};
		
		printf("\n");
		for(int i = 0; i < sizeof(dataDescriptions) / sizeof(dataPointers[0]); i++) {
			printf("%s del estudiante: %s \n", dataDescriptions[i], dataPointers[i]);
		};	
		
	} else if (option == 2)
		printf("Estas en la opcion 2");
	else if (option == 3)
		printf("Estas en la opcion 3");
	else if (option == 4)
		printf("Estas en la opcion 4");
	else if (option == 5)
		printf("Saliendo");
	else
		printf("Error! Ese valor no existe");
	
	return 0;
}