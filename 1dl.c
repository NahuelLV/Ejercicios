#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main (int argc, char *argv[]) {

	double a = atof(argv[1]);
        double b = atof(argv[2]);
	double c = atof(argv[3]);
	double D =  b * b - 4 * a * c;
			    
	if (D > 0) {
				            
	   double raiz1 = (-b + sqrt(D)) / (2 * a);
           double raiz2 = (-b - sqrt(D)) / (2 * a);
	   printf("Las raíces son: %.2lf y %.2lf\n", raiz1, raiz2);
	   return 0;
	}else if(D < 0){
		printf("No hay soluciones con numeros reales\n");
		return 0;

	}else if(a == 0){
		double raiz =  -b / (2 * a);
	      printf("La raiz es %2lf\n", raiz );
	      return 0;

	}

	printf("\n");
	return 0;
}
