#include <stdio.h>
#include <conio.h>

int main(){
	int c;

	float F, R;

	printf("Masukkan suhu dalam Celcius : ");
	scanf("%i", &c);

	// konversi suhu
	printf("Mengkonversi suhu...\n");
	// F = 9/5 * c + 32
	F = (c * 9/4 ) + 32;
	printf("Suhu dalam Farenheit adalah.. %.2f\n", F);
	// R = 4/5 * C
	R = 4/2 * c;
	printf("Suhu dalam Reamur adalah..... %5.2f\n", R);

	return 0;
}