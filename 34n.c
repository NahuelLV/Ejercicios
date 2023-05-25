
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char *argv[]){

	int d = atoi(argv[1]);
	int a = d/365;
	int ra= d%365;
	int s = ra/7;
	int rs= ra%7;
	int day = rs;

	printf("%d años, %d semanas, %d dias \n", a, s, day);


	return 0;


} 
