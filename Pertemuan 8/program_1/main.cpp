
// notasi dengan for 

#include <stdio.h>

int main(){

	int N, i, jumlah;

	printf("Berapa N ? : ");
	scanf("%d", &N);

	jumlah = 0;
	for(i = 0; i <= N; i++){
		jumlah = jumlah + 1;
		printf("%d\n", i);
	}
	printf("Jumlah deret = %d\n", jumlah);

	return 0;
}