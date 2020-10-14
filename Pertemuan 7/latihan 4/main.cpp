#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double on1, on2, hasil;
    char op;
    int tanda;

    printf("ketikkan ekspresi (misal:5*9.8) ");
    scanf("%lf %c %lf", &on1 , &op ,&on2 );
    fflush(stdin);

    switch(op){
        case '+':
            tanda = 1;
            hasil = on1 + on2;
            break;
        case '-':
            tanda = 1;
            hasil = on1 - on2;
            break;
        case '/':
            if(on2 != 0.0){
                tanda = 1;
                hasil = on1 / on2;
                break;
            }else {
                tanda = 0;
                break;
            }
        case '^':
            hasil = pow(on1, on2);
            break;
        default:
            hasil = 0;
            printf("\nOperator Salah..\n");

    }
    if(tanda)
        printf("hasil = %.2lf", hasil);
    else printf("Operator tidak dikenal \n Tidak ada hasil..");

    return 0;
}
