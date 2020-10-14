#include <stdio.h>
#include <conio.h>

int main(){

	int t; // waktu
	float v, S; // kecepatan , jarak tempuh

	printf("Masukkan kecepatan dalam v = ");
	scanf("%f", &v);
	printf("Masukukkan waktu t (detik) = ");
	scanf("%d", &t);

	S = v * t;
	printf("\njadi jarak tempuh, dengan kecepatan %.1f dan dalam waktu %d detik adalah: %.1f \n", v, t, S);

	return 0;
}