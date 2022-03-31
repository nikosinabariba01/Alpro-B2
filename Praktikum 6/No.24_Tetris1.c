/*Nama File 	: No.24_Tetris1*/
/*Deskripsi 	: Menampilkan susuan karakter bintang sesuai dengan masukan nilai N ‘*’*/
/*Pembuat       : 24060121140126-Niko Geraldi Sinabariba */
/*Tgl Pembuatan : Minggu 31 Maret 2022*/

#include <stdio.h>
int main()
{
 //Kamus
   int N;
   int i;
   int c;
 //Algoritma
   printf("Masukkan nilai N yang ingin dimasukkan =");
   scanf("%d", &N);
   if (N > 0)
   {
    for(i = N; i >= 1; i--)
    {
     for(c = 1; c <= i; c++)
     {
      printf("* ");
     }
      printf("\n");
    }
   }
   else
   {
    printf("masukkan harus integer positif !");
   }
 return 0;
}

