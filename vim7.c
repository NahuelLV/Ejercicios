#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int al (void) {
	int num = rand() % 100;
	return num+1;
}

int main(void) {
	srand(time(NULL));
	printf("%d\n", al());
	printf("%d\n", al());
	printf("%d\n", al());
	printf("%d\n", al());
	return 0;
}
