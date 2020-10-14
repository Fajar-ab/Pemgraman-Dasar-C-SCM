#include <stdio.h>

int main(){
	int kodeBulan;

	printf("Masukkan kode bulan (1..12) : ");
	scanf("%d", &kodeBulan);

	if(kodeBulan == 1)
	{
		printf("Januari\n");
	}else if(kodeBulan == 2)
	{
		printf("Februari\n");
	}else if(kodeBulan == 3)
	{
		printf("Maret\n");
	}else if (kodeBulan == 4)
	{
		printf("April\n");
	}else if (kodeBulan == 5)
	{
		printf("Mei\n");
	}else if (kodeBulan == 6)
	{
		printf("Juni\n");
	}else if (kodeBulan == 7)
	{
		printf("Juli\n");
	}else if (kodeBulan == 8)
	{
		printf("Agustus\n");
	}else if (kodeBulan == 9)
	{
		printf("September\n");
	}else if (kodeBulan == 10)
	{
		printf("Oktober\n");
	}else if (kodeBulan == 11)
	{
		printf("November\n");
	}else if (kodeBulan == 12)
	{
		printf("Desember\n");
	}else {
		printf("Kode bulan yang anda masukkan salah\n");
	}

	return 0;
}