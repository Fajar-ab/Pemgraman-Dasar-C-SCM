#include <stdio.h>
#include <conio.h>

int main(){
	int a = 5;
	int b = 2;
	float c = 5.0;
	float d = 2.0;

	printf("5/2     Dalam int    = %d\n",   (a/b));
	printf("5.0/2.0 Dalam float  = %.2f\n", (c/d));
	printf("_____________________________\n");
	printf("5/2     Dalam float  = %.2f\n", (a/b));
	printf("5.0/2.0 Dalam int    = %d\n",   (c/d));
	printf("_____________________________\n");
	printf("5/2     cast float_1 = %.2f\n", ((float) a/b));
	printf("5/2     cast float_2 = %.2f\n", ((float) a/ (float) b));
	printf("_____________________________\n");
	printf("5.0/2.0 cast int_1   = %d\n",   ((int) c/d));
	printf("5.0/2.0 cast int_2   = %d\n",   ((int) c/ (int) d));


	getch();
}