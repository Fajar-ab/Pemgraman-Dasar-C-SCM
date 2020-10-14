// perogram untuk menentukan nilai mahasiswa

#include <stdio.h>

int main(){
	int nilai[10], i, n, jumlah=0;

	printf("Masukkan jumlah siswa : ");
	scanf("%d", &n);
	for(i=0; i<=n; ++i){
		printf("Masukkan nilai siswa : ");
		scanf("%d", &nilai[i]);
		jumlah += nilai[i];
	}
	printf("jumlah Nilai Siswa = %d", jumlah);

	return 0;
}