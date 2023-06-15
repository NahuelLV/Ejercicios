#include <stdio.h>
#include <stdlib.h>


 int main (int argc, char *argv[]) {

   int n= atoi(argv[1]);
		         
		         
      if(n < 0) {
      n = n*-1;
      }

      while(n != 0) {

        printf ("%d\n", n);
	return 0;
	  }
      printf("\n");
      return 0;
 }
