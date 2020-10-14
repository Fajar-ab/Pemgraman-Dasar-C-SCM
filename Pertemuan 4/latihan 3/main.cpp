#include <stdio.h>
#include <conio.h>

int main(){

	int hrf;
	hrf = 'A';

	printf("Nilai desimal karakter %c adalah %d\n", hrf, hrf);
	// pada tipe data karakter dapat dilakukan operasi matematika
	printf("%c = %d\n", hrf, hrf);
	printf("%c = %c",   hrf, (hrf + 32));
	

	getch();
}