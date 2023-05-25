

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char *argv[]){

	double a= atof(argv[1]);
	double b= atof(argv[2]);
	double h= sqrt(a*a + b*b);

	printf("%f\n", h);

	return 0;

}
