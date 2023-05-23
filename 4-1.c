#include <stdio.h>

#include <stdlib.h>

int factorial(int n) {


   int r = 1;
   int i = 1;

while (i <=n) {

        r *=i;
        i++;

}
   return r;

}

int main(int argc, char *argv[]){


        int a = atoi(argv[1]);                        
        if (a <= 0) {
        printf("Error\n");
        return 0;                                             }
        printf("Factorial de %d=%d\n", a, factorial(a));
        return 0;
}

