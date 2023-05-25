

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]) {

	double nota_1= atof(argv[1]);
	double nota_2= atof(argv[2]);
	double nota_3= atof(argv[3]);

	double promedio= (nota_1 + nota_2 + nota_3) /3.0;
	printf("%f\n", promedio);
	return 0;


}


