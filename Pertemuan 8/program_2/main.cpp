
// notasi dengan while

#include <stdio.h>

int main(){

	int N, i, jumlah;

	printf("Berapa N = ");
	scanf("%d", &N);

	jumlah = 0;
	i = 1;

	while(i <= N){
		jumlah = jumlah + 1;
		printf("%d\n", i);
		i++;
	}
	printf("Jumlah deret = %d\n", jumlah);

	return 0;
}