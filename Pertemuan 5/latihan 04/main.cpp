#include <stdio.h>
#include <conio.h>

int main(){

	int i = 1234;
	printf("%i\n", i);
	printf("%5i\n", i);
	printf("%7d\n", i);
	printf("%07d\n", i);
	printf("%-7d\n", i);

	getch();
}