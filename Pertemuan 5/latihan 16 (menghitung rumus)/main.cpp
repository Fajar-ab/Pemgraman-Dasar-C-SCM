#include <stdio.h>
#include <conio.h>

int main(){
	
	int E, m, c;

	printf("Masukkan nilai m = ");
	scanf("%d", &m);
	printf("Masukkan nilai c = ");
	scanf("%d", &c);

	// rumus
	E = m * (c*c);
	printf("\n E = %d", E);

	getch();
}