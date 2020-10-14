#include <stdio.h>
#include <string.h>
#define max 10

using namespace std;

struct mahasiswa{
	char noKTP[20];
	char namaMahasiswa[30];
	char tempat_tgl[40];
	char jenis_kelamin[8];
	char agama[8];
	char noHP[12];
	char alamat[30];
	char anak[10];
};

struct orang_tua{
	char no_KK[20];
	char namaAyah[30];
	char namaIbu[30];
	char pekerjaan[20];
	char no_hp[12];
};

struct riwayat_pendidikan{
	char sekolah_asal[30];
	char tahun_lulus[5];
};

int main(){
	mahasiswa data_MHS;
	orang_tua data_ORT;
	riwayat_pendidikan data_pendidikan;

	printf("BIODATA DIRI CALON MAHASISWA\n");
	printf("   Nama Lengkap          : ");
	scanf("%[^\n]", &data_MHS.namaMahasiswa);
	fflush(stdin);
	printf("   NIK/No.KTP            : ");
	scanf("%s", &data_MHS.noKTP);
	fflush(stdin);
	printf("   Tempat, Tanggal lahir : ");
	scanf("%[^\n]", &data_MHS.tempat_tgl);
	fflush(stdin);
	printf("   Jenis Kelamin         : ");
	scanf("%[^\n]", &data_MHS.jenis_kelamin);
	fflush(stdin);
	printf("   Agama                 : ");
	scanf("%s", &data_MHS.agama);
	fflush(stdin);
	printf("   No.HP                 : ");
	scanf("%s", &data_MHS.noHP);
	fflush(stdin);
	printf("   Alamat                : ");
	scanf("%[^\n]", &data_MHS.alamat);
	fflush(stdin);
	printf("   Anak ke               : ");
	scanf("%s", &data_MHS.anak);
	fflush(stdin);

	printf("\nDATA ORANG TUA\n");
	printf("   No.Kartu Keluarga     : ");
	scanf("%s", &data_ORT.no_KK);
	fflush(stdin);
	printf("   Nama Ayah             : ");
	scanf("%[^\n]", &data_ORT.namaAyah);
	fflush(stdin);
	printf("   Nama Ibu              : ");
	scanf("%[^\n]", &data_ORT.namaIbu);
	fflush(stdin);
	printf("   Pekerjan              : ");
	scanf("%[^\n]", &data_ORT.pekerjaan);
	fflush(stdin);
	printf("   No.HP                 : ");
	scanf("%s", &data_ORT.no_hp);
	fflush(stdin);

	printf("\nRIWAYAT PENDIDIKAN\n");
	printf("   Sekolah / PT.Asal     : ");
	scanf("%[^\n]", &data_pendidikan.sekolah_asal);
	fflush(stdin);
	printf("   Tahun Lulus           : ");
	scanf("%s", &data_pendidikan.tahun_lulus);
	fflush(stdin);

	int bayar;
	printf("\nRINCIAN BIAYA KULIAH\n");
	printf("   1. Uang Pendaftaran         : Rp. 150.000\n");
	printf("   2. Uang Kuliah Per Tahun    : Rp. 3.500.000\n");
	printf("      DP                       : Rp. 1.000.000\n");
	printf("      Sisa (Dicicil Selama 10x : Rp. 2.500.000\n");
	printf("      Cicilan                  : Rp. 250.000\n");
	printf("      Dibayar lunas disc.10    : Rp. 350.000\n");
	printf("   3. Uang Kelengkapan\n");
	printf("      (KTM, Jas Almamater)     : Rp. 350.000\n");
	printf("\n      Uang yang akan dibayar   : Rp. ");
	scanf("%d", &bayar);

	char ulang = 'y';
	do{
		printf("\n\n-------------- MENU ------------\n");
		printf("1. Tampilkan Data Calon Mahasiswa\n");
		printf("2. Tampilkan Data Orang Tua\n");
		printf("3. Tampilkan Riwayat Pendidikan\n");
		printf("4. Tampilkan Biaya Pendaftaran\n");
		printf("0. Selesai\n");

		int pilih;

		printf("\npilih Menu : ");
		scanf("%d", &pilih);
		printf("\n\n");
		if(pilih == 1){
			printf(" BIODATA DIRI CALON MAHASISWA\n");
			printf("Nama             : %s\n", data_MHS.namaMahasiswa);
			printf("No.KTP           : %s\n", data_MHS.noKTP);
			printf("Tempat,Tgl lahir : %s\n", data_MHS.tempat_tgl);
			printf("Jenis Kelamin    : %s\n", data_MHS.jenis_kelamin);
			printf("Agama            : %s\n", data_MHS.agama);
			printf("Alamat           : %s\n", data_MHS.alamat);
			printf("No.Hp            : %s\n", data_MHS.noHP);
		}else if(pilih == 2){
			printf(" DATA ORANG TUA\n");
			printf("No.Kartu Keluarga : %s\n", data_ORT.no_KK);
			printf("Nama Ayah         : %s\n", data_ORT.namaAyah);
			printf("Nama Ibu          : %s\n", data_ORT.namaIbu);
			printf("Pekerjan          : %s\n", data_ORT.pekerjaan);
			printf("No.Hp             : %s\n", data_ORT.no_hp);
		}else if(pilih == 3){
			printf(" RIWAYAT PENDIDIKAN\n");
			printf("Sekolah / PT.Asal : %s\n", data_pendidikan.sekolah_asal);
			printf("Tahun Lulus       : %s\n", data_pendidikan.tahun_lulus);
		}else if(pilih == 4){
			int discon, total;

			printf("\nBIAYA PENDAFTARAN\n");
			if(bayar >= 3500000){
				printf("Di Bayar = Rp. %d ", bayar);
				printf("- 10 persen\n");

				discon = bayar * 0.10;
				total = bayar - discon;
				printf("\nTotal Bayar = Rp. %d", total);
			}else if(bayar < 3500000){
				printf("Total Bayar = Rp. %d \n", bayar);
			}
		}else if(pilih == 0){
			printf("Selesai...\n");
			printf("Terima kasih...\n");
			break;
		}else{
	    	printf("Pilihan yang anda masukkan tidak ada...\n\n");
	    }

		printf("\nApakah ingin mengulang (y/t): ");
		scanf("%s", &ulang);

	}while(ulang == 'y');

	return 0;
}

