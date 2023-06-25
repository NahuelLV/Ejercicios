#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int lanzamiento(){

	int DC = rand() % 7;
	if (DC == 6){
	
		return (DC % 6) + 1;

	} else {

		return (DC % 6) + 1;
	}
}

int main() {
	    
	srand(time(NULL));
	int R = lanzamiento();
        printf ("El numero que salio es: %d\n", R);
		        
}
