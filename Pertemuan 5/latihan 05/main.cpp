#include <stdio.h>
#include <conio.h>

int main(){

	float x = 123.4567;
	printf("%3f %15f %020f\n", x, x, x);
	printf("%3e %15e %020e\n", x, x, x);

	getch();
}