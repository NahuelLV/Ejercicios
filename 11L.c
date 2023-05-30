#include<stdio.h>
#include<stdlib.h>

void divisible(int a, int b) {
	while(a < b){
		if (a%3 ==0){
			printf("%d\n", a);
			a++;
		} else {
			a++;
		}
	}
}
int main(int argc, char *argv[]){

	int a= atoi(argv[1]);
	int b= atoi(argv[2]);
	int c = (b-a) / 3;
	if (a>b){
		printf(" a tiene que ser menor que b\n");
	} else {
		divisible(a,b);
	}
	return 0;
}
