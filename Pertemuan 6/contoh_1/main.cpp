#include <stdio.h>
#include <conio.h>

int main(){

	double x, y, terbesar;

	printf("Masukkan x : ");
	scanf("%lf", &x);

	printf("Masukkan y : ");
	scanf("%lf", &y);

	terbesar = x;

	if (terbesar < y)
		terbesar = y;

		printf("Bilangan terbesar = %.lf\n", terbesar);

	return 0;
}