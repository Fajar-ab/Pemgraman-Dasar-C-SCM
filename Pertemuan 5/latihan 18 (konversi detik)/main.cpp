#include <stdio.h>
#include <conio.h>

int main(){

	int pilih, hari, jam, menit, detik;

	printf("\n------Konfersi Detik-----\n");
	printf("1.Konversi hari \n");
	printf("2.Konversi jam \n");
	printf("3.Konversi menit \n");

	printf("\nPilih nomor : ");
	scanf("%d", &pilih);
	printf("\n");

	if(pilih == 1){
		printf("Masukkan Berapa hari : ");
		scanf("%d", &hari);
		printf("Mengkonversi...\n");
		// 1 hari = 86400 detik
		detik = hari * 86400;
		printf(" %d hari sama dengan %d detik.\n", hari, detik);
	}
	else if(pilih == 2){
		printf("Masukkan Berapa jam : ");
		scanf("%d", &jam);
		printf("Mengkonversi...\n");
		// 1 jam = 3600 detik
		detik = jam * 3600;
		printf(" %d jam sama dengan %d detik.\n", jam, detik);
	}
	else if(pilih == 3){
		printf("Masukkan Berapa menit : ");
		scanf("%d", &menit);
		printf("Mengkonversi...\n");
		// 1 menit = 60 detik
		detik = menit * 60;
		printf(" %d menit sama dengan %d detik.\n", menit, detik);
	}
	else {
		printf("Masukkan nomor 1 - 3 saja...\n");
	}

	return 0;
}