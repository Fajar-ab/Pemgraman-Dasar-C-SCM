/*
	Perogram pengolahan nilai mata kuliah
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2
#define PASSW "Rahasia"//			Fajar

void judul();
void selesai();
void login();
void bacaData();
void info();
void hitungNilai(int i);
double hitungAkhir(double m, double u, double t);
char konversi(double a);
void yudisium(int i, char h);
void menu();

char nama[30][N];
char yudis[20][N];//				Fajar

double mid[N];
double uas[N];
double tugas[N];
double akhir[N];    
char huruf[N];

main(){
	judul();
	login();
}

void judul(){
	printf("Program Mengolah Nilai Agoritma\n");
	printf("Program    : fajar fadilah\n");
	printf("Nama pacar : ME___A\n");
	printf("Created    : 1/7/2020\n\n");
}
void selesai(){
	printf("Program Selesai\n");
	printf("Terima kasih...\n");
	printf("Sampai jumpa...\n");
}

void login(){
	char kode[20];
	int tanda;

	printf("Ketikkan password anda : ");
	gets(kode);
	fflush(stdin);

	tanda = strcmp(PASSW, kode);
	if(!tanda){
		menu();
	}else{
		printf("Password salah..\n");
		selesai();
	}
}

void menu(){
	int pilih;

	bacaData();
	printf("MENU PILIHAN\n");
	printf("1. TAMPILAKAN INFORMASI\n");
	printf("2. CARI MAHASISWA TERTENTU\n");
	printf("3. Tampilan Mahasiswa Terbaik\n");
	printf("0. Keluar\n");
	printf("ketikkan nomor menu pilihan (1,2,3 atau 0): ");
	scanf("%d", &pilih);

	switch(pilih){
		case 1:
			info();
			break;
		case 2:
			printf("Under construction!\n");
			selesai();
			break;
		case 3:
			printf("Under construction!\n");
			selesai();
			break;
		case 0:
			selesai();
			break;
		default:
			printf("Nomor pilihan tidak ada!\n");
			selesai();
	}
}

void bacaData(){
	int i;
	char namanya[30];

	printf("\nMengentri Nilai\n");
	for (i = 0; i < N; i++){
		printf("Nama Mahasiswa: ");
		gets(namanya);
		strcpy(nama[i], namanya);
		printf("Nilai MID   : ", (i+1));
		scanf("%lf", &mid[i]);
		fflush(stdin);
		printf("Nilai UAS   : ", (i+1));
		scanf("%lf", &uas[i]);
		fflush(stdin);
		printf("Nilai TUGAS : ", (i+1));
		scanf("%lf", &tugas[i]);
		fflush(stdin);
		hitungNilai(i);
	}
}

void hitungNilai(int i){
	akhir[i] = hitungAkhir(mid[i], uas[i], tugas[i]);
	huruf[i] = konversi(akhir[i]);
	yudisium(i, huruf[i]);
}

double hitungAkhir(double a, double b, double c){
	return (a * 0.3 + b * 0.3 * c + 0.4);
}
//                                     Fajar
char konversi(double k){
	if((k >= 81.0) && (k <= 100.0))
		return 'A';
	else if((k >= 66.0) && (k < 81.0))
		return 'B';
	else if((k >= 55.0) && (k < 66.0))
		return 'C';
	else if((k >= 45.5) && (k < 55.0))
		return 'D';
	else 
		return 'E';//					Fajar
}

void yudisium(int i, char h){
	if(h == 'A')
		strcpy(yudis[i], "SANGAT MEMUASKAN");
	else if(h == 'B')
		strcpy(yudis[i], "MEMUASKAN");
	else if(h == 'C')
		strcpy(yudis[i], "CUKUP MEMUASKAN");
	else if(h == 'D')
		strcpy(yudis[i], "KURANG MEMUASKAN");
	else 
		strcpy(yudis[i], "DENGAN EJEKAN");
}

void info(){
	int i;

	printf("\nMenampilkan Nilai\n");
	for(i=0; i<N; i++){
		printf("%d. NAMA    : \n", (i+1), nama[i]);
		printf("	 MID    : %0.2lf\n", mid[i]);
		printf("	 UAS    : %0.2lf\n", uas[i]);
		printf("	 TUGAS  : %0.2lf\n", tugas[i]);
		printf("	 N AKHIR: %0.2lf\n", akhir[i]);
		printf("	 N HURUF: %c\n\n", huruf[i]);
	}
}

 // citramandiriofficial@gmail.com