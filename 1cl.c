#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	    
	    int a = atoi(argv[1]);
	    if (a > 0) {
	     printf("El numero %d es positivo\n", a);	           return 0;
	
	    }else if(a < 0){
	printf("El numero %d es negativo\n", a );
	return 0;
		
	    }else if(a == 0){
						            printf("El numero que ingrsaste es %d\n", a );
							    return 0;
												            }

	    return 0;
}
