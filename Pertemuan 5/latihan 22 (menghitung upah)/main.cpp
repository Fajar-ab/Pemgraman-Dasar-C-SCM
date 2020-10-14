#include <stdio.h>
#include <conio.h>

int main(){
	int jam, upah;
	printf("Masukkan berapa jam = ");
	scanf("%d", &jam);

	printf("\n %d jam dikali 5000.\n", jam);

	upah = jam * 5000;
	printf("Jadi upah gaji pegawai sama dengan %d", upah);

	return 0;
}