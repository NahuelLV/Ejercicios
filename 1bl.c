#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);

	if (a > b && a > c) {
			            
	       printf("%d", a);

	}else if(b > a && c < b){

		printf("%d", b);
							          }else if (c > a && b < c){
									  printf("%d", c);
								  }
	printf("\n");
	return 0;
}
