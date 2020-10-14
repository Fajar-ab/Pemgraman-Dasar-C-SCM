#include "stdio.h"

int main(){
	int angka;

		printf("\nMasukkan bilangan bulat   : ");
		scanf("%d", &angka);
		printf("\n");
		printf("Bilangan Romawi... ");

		do
		{
			if(angka > 4000){
				printf("\nMaaf hanya sampai 4000\n");
				angka = angka - angka;
			}
			else if(angka >= 1000){
				printf("M");
				angka = angka - 1000;
			}
			else if(angka >= 900){
				printf("CM");
				angka = angka - 900;
			}
			else if(angka >= 500){
				printf("D");
				angka = angka - 500;
			}
			else if(angka >= 400){
				printf("CD");
				angka = angka - 400;
			}
			else if(angka > 100){
				printf("C");
				angka = angka - 100;
			}
			else if(angka >= 90){
				printf("XC");
				angka = angka - 90;
			}
			else if(angka >= 50){
				printf("L");
				angka = angka - 50;
			}
			else if(angka >= 40){
				printf("XL");
				angka = angka - 40;
			}
			else if(angka > 10){
				printf("X");
				angka = angka - 10;
			}
			else if(angka == 9){
				printf("IX");
				angka = angka - 9;
			}
			else if(angka >= 5){
				printf("V");
				angka = angka - 5;
			}
			else if(angka == 4){
				printf("IV");
				angka = angka - 4;
			}
			else if(angka >= 1){
				printf("I");
				angka = angka - 1;
			}
			else{
				printf("\nMasukkan dengan benar!\n");
				angka = angka - angka;
			}
		}
		while(angka>0);


	return 0;
}