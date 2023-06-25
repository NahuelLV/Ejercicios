#include <stdio.h>

int sumaN(int n) {
	int suma = 0;    
	int i;
	for (i = 1; i <= n; i++) {
		suma += i;
	}
	return suma;
}

int main() {
	int n;
	printf("Ingrese el valor de n: ");
	scanf("%d", &n);

	int resultado = sumaN(n);

	printf("La suma de los primeros %d números naturales es: %d\n", n, resultado);

	return 0;
}
