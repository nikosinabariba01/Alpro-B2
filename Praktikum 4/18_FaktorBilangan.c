/*Nama Program : FaktorBil.c*/
/*Deskripsi    : menampilkan faktor dari angka inputan N*/
/*Pembuat      : 24060121140126 - Niko Geraldi Sinabariba*/
/*Tgl Pembuatan : 20 Maret 2022*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N,i;

    printf("Ingin mencari faktor dari bilangan berapa? ");
    scanf("%d",&N);

    for(i=1; i<=N ;i++){
        if (N % i == 0){
            printf(" %d",i);
        }
    }
    return 0;
}

