/*Nama File 	: InsertionSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan insertion sort*/
/*Pembuat   	: Niko Geraldi Sinabariba - 24060121140126*/
/*Tgl Pembuatan	: sabtu, 07 Mei 2022*/

#include <math.h>
#include <stdio.h>

/* fungsi insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// untuk print array di c
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/* Driver program to test insertion sort */
int main()
{
	int arr[] = { 1, 3, 4, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
