#include <stdio.h>
#include <conio.h>


int main()
{
    int nilai;
    char hasil;

    printf("masukkan nilai mahasiswa : ");
    scanf("%d", &nilai);

    if(nilai >= 81 && nilai <= 100){
        hasil = 'A';
    }else if(nilai >= 71 && nilai <= 80){
        hasil = 'B';
    }else if(nilai >= 61 && nilai <= 70){
        hasil = 'C';
    }else if(nilai <= 60){
        hasil = 'D';
    }

    switch(hasil){
        case 'A':
            printf("grade mahasiswa adalah A");
            break;
        case 'B':
            printf("grade mahasiswa adalah B");
            break;
        case 'C':
            printf("grade mahasiswa adalah C");
            break;
        case 'D':
            printf("grade mahasiswa adalah D");
            break;
        case 'E':
            printf("grade mahasiswa adalah E");
    }

    return 0;
}
