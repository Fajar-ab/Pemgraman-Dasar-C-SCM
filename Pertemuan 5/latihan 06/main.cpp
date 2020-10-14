#include <stdio.h>
#include <conio.h>

int main(){

	float F =12345.6789;

	printf("%15f\n", F);
	printf("%15.2f\n", F);
	printf("%015f\n", F);
	printf("%-15f\n", F);
	printf("%15.0f\n", F);

	getch();
}