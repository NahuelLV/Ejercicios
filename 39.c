#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



int main(int argc, char *argv[]) {

        int a = atoi (argv[1]);
        bool v= a%4 ==0;
	v = v && a %100 !=0,
	v = v || a %400 ==0,

        printf("%s\n", v? "Es biciesto":"No es biciesto");
        return 0;

}
