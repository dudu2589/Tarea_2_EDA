#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int resolution = 1920*1080; // variable general a usar 

int * read_bin(char * bin_file);
void create_pbm_img(int arreglo[] , char * name);

/*insert sort*/
void insertionSort(int arr[], int n);

/*quick sort*/
void quicksort(int arr[], int inicio , int fin);
int partition(int arr[] , int inicio , int fin);

/*radix sort*/
int maximo(int array[], int n);
void countingSort(int array[], int size, int pos);
void radixsort(int array[], int size);