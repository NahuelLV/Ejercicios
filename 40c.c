#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(int argc, char *argv[]) {

        int a = atoi (argv[1]);
        int b = atoi (argv[2]);

        int min = a - b;

        printf("%d\n", min);
        return 0;

}
