// Nama         : Niko Geraldi Sinabariba
// NIM          : 24060121140126
// Tanggal      : 13 Maret 2022
// Nama Program : CekSeriPositif.c
/* Deskripsi    : mengecek ketiga inputan merupakan tahanan yang bernilai positif dan menampilkan hasil Tahanan jika dirangkai seri*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int r1,r2,r3,rseri;

    //Algoritma
    printf("Masukkan tahan pertama : ");
    scanf("%d",&r1);
    printf("Masukkan tahan kedua : ");
    scanf("%d",&r2);
    printf("Masukkan tahan ketiga : ");
    scanf("%d",&r3);
    if (r1 >0 && r2 > 0 && r3 >> 0){
        rseri = r1+r2+r3;
        printf("%d",rseri);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
