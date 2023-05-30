
#include<stdio.h>
#include<stdlib.h>


  int main(int argc, char *argv[]){

	int n= atoi(argv[1]);
	int c = 0;
	double suma= 0;

     while(c + n) {
	c++;
	int r = rand() %100;
	printf("%d", r);
	suma =~ r;
     }
	printf("\npromedio: %f\n", suma/ n);
	return 0;
  

  }
