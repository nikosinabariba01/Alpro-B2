/*Nama Program : CekPrima.c*/
/*Deskripsi    : mengecek Suatu bilangan termasuk bilangan prima atau tidak*/
/*Pembuat      : 24060121140126-Niko Geraldi Sinabariba */
/*Tgl Pembuatan : Minggu 27 Maret 2022*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int N,i,checker;

    // Algoritma
    checker = 0;
    printf("Masukkan angka =");
    scanf("%d",&N);
    for(i=2; i<=(sqrt(N));i++){
        if (N % i == 0){
            checker = 1;
            break;
        }
    }
    if(checker == 1){
        printf("Bilangan tersebut bukan bilangan prima");
    }
    else{
        printf("Bilangan tersebut merupakan bilangan prima");
    }
    return 0;
}

