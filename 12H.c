

 #include<stdio.h>
 #include<stdlib.h>


   int main(int argc, char*argv[]) {
	   //Faltaba el "int" antes de char
	   int a= atoi(argv[1]);
	   //No se habia declarado el valor del entero
	   printf("Hola, %d\n", a);
	   //El printf estaba mal
	   return 0;
	   //Faltaba el ";"
	
   }
