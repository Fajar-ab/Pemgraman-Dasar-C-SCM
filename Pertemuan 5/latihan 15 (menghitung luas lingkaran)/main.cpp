#include <stdio.h>
#include <conio.h>

int main(){

	float pi = 3.14;
	int luas, diameter, r;

	printf("Masukkan diameter lingkaran = ");
	scanf("%d", &diameter);

	// menentukan jari-jari
	r = diameter / 2;
	printf("jari-jari lingkaran = %d\n\n", r);

	// rumus : luas = pi * jari-jari²
	printf("jadi luas  = %.2f * %d * %d\n\n", pi, r, r);

	luas = pi * (r * r);
	printf("luas lingkaran = %d\n", luas); 



	getch();
}