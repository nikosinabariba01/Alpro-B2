/*Nama Program : CekSempurna.c*/
/*Deskripsi    : mengecek apakah sebuah bilangan merupakan bilangan sempurna*/
/*Pembuat      : 24060121140126-Niko Geraldi Sinabariba */
/*Tgl Pembuatan : Minggu 27 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int N,i,sempurna;
    sempurna = 0;
    printf("Masukkan bilangan = ");
    scanf("%d",&N);

    for(i=1; i<N ;i++){
        if (N % i == 0){
            sempurna = sempurna + i;
        }
    }
    if (N == sempurna){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan bilangan Sempurna");
    }
    return 0;
}
