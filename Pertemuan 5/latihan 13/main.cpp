#include <stdio.h>
#include <conio.h>

int main(){

	char kata[20];
	printf("Masukkan suatu nilai string  : ");
	scanf("%[^\n]", kata);
	printf("Nilai string yang dimasukkan : %s\n", kata);

	getch();
}