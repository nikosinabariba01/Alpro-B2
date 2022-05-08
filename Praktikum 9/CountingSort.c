/*Nama File 	: CountingSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan counting sort*/
/*Pembuat   	: Niko Geraldi Sinabariba - 24060121140126*/
/*Tgl Pembuatan	: sabtu, 07 Mei 2022*/

void CountingSort(int T[], int N)
{
    int i, j, temp, idx;
    for(i = 0; i < (N-1); i++){
        idx = i;
        for(j = i+1; j < N; j++){
            if(T[j] < T[idx]){
                idx = j;
            }
        }
        temp = T[i];
        T[i] = T[idx];
        T[idx] = temp;
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;
    //Algoritma
    printf("Counting Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    CountingSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
