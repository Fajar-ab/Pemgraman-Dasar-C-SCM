#include <stdio.h>
#include <conio.h>

int main(){
	int x = 2;
	int y = 1;

    int h = x++ + ++y - x++;
	// di atas itu sama dengan h = 3 + 1 - 3   

    printf("Hasil : %d", h);

	getch();
}