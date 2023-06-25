#include <stdio.h>
#include <stdlib.h>


int operacion(char formadepago, double precio, int cantidad){
	double monto = precio * cantidad;
	        
	if(formadepago == 'e'){
		monto *= 0.15;
		return monto;
	}else if(formadepago == 't'){
		monto *= 0.10;
		return monto;
	}else if(formadepago == 'c'){
		monto *= 0.05;
		return monto;
	}else if(formadepago == 'd'){
		return 0;
	}
}

int main(int argc, char *argv[]) {
	    
	char formadepago = argv[1][0];
	double precio = atof(argv[2]);
	int cantidad = atoi(argv[3]);
	if (argc < 4) {
		printf("Foma de pago('e', 'c', 'd, 't'), precio, cantidad\n");
		return 0;
	}

	double montototal = operacion(formadepago, precio, cantidad);

	printf("El descuento es de: %.2f\n", montototal);
	printf("El monto a pagar es de: %.2f\n", precio * cantidad - montototal);
	return 0;
}
