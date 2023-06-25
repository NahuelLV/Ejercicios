#include <stdio.h>

void tablas(int n) {
	printf("Número\tCuadrado\n");
	 printf("------\t-------\n");

	 for (int i = 1; i <= n; i++) {
		 int cuadrado = i * i;
		 printf("%d\t%d\n", i, cuadrado);
	 }
}

int main(int argc, char *argv[]) {
	int n;
	printf("Ingrese un número: ");
	scanf("%d", &n);
	tablas(n);
	return 0;
}
