
// motasi dengan menggunakan Repeat

#include <stdio.h>
int main()
{
	int N, i, jumlah;

	printf("Berapa N ? ");
	scanf("%d",  &N);
	
	jumlah = 0;
	i = 1;

	do{
		jumlah = jumlah + 1;
		printf("%d\n", i);
		i++;
	} while (i <= N);
	printf("Jumlah deret  = %d\n", jumlah);

	return 0;
}