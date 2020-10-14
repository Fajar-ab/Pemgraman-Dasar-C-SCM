#include <stdio.h>
#include <conio.h>

// fungsi bernama xxx bersifat rekursif

int xxx(int A[], int n){

	// jika n adalah 0
	if(n == 0) return A[0];
	else return xxx(A, (n-1) %4) + A[n];
}

/*
di dalam dungsi main dibuat array 1 dimensi
bernama A berjumlah 5 elemen yang bertipe integer
tujuannya untuk mencoba fungsi xxx diatas
*/

int main(){
	int A[5] = {1,2,3,4,5};
	printf("%d ", xxx(A,1));

	
	getch();
}