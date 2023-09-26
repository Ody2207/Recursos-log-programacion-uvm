#include <stdio.h>

int factorial(int n);

int main() {
	int numero;
	
	printf("Dame el numero factorial: ");
	scanf("%d", &numero);
	
	int resultado = factorial(numero);
	
	printf("El valor factorial es: %d", resultado);
	
	return 0;
}

int factorial(int n) {
	if(n < 0) {
		return printf("Error, no se aceptan numero negativos");
	} else if (n == 1) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
	
	
}