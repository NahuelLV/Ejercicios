#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(int argc, char *argv[]) {

        int a = atoi (argv[1]);
        int b = atoi (argv[2]);

        double promedio = (a + b) /2.0;


        printf("%f\n", promedio);
        return 0;


}

