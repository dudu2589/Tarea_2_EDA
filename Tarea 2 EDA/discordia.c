#include "discordia.h"
#include "read_bin.c"
#include "create_pbm_img.c"
#include "insert_sort.c"
#include "quicksort.c"
#include "radix_sort.c"

int main(int argc , char *argv[]){
    int *arreglo = NULL; // insert
    int *arreglo2 = NULL; // quick
    int *arreglo3 = NULL; // radix
    //lectura imagen 
    arreglo = read_bin(argv[1]);
    arreglo2 = read_bin(argv[1]);
    arreglo3 = read_bin(argv[1]);
  
    if(arreglo==NULL || arreglo2==NULL  || arreglo3==NULL){
        free(arreglo);
        free(arreglo2);
        free(arreglo3);
        return -1;
    }

    /*insertsort*/
    //clock_t start_insert = clock();
    //insertionSort(arreglo,resolution);
    //clock_t end_insert = clock();
    /*quicksort*/
    clock_t start_quick = clock();
    quicksort(arreglo2,0,resolution - 1);
    clock_t end_quick = clock();
    /*radixsort*/
    clock_t start_radix = clock();
    printf("%d %d %d\n",arreglo3[0],arreglo3[1],arreglo3[2]);
    radixsort(arreglo3,resolution);
    printf("%d %d %d\n",arreglo3[0],arreglo3[1],arreglo3[2]);
    clock_t end_radix = clock();
    
    //creacion imagen
    //create_pbm_img(arreglo);
    create_pbm_img(arreglo2 , "quick_sort_img.pbm");
    create_pbm_img(arreglo3 , "radix_sort_img.pbm");

    //liberacion de memoria
    free(arreglo);
    free(arreglo2);
    free(arreglo3);

    //TIMES 
    //double Insert_t = end_insert - start_insert;
    double Quick_t = end_quick - start_quick;
    double Radix_t = end_radix - start_radix;
    
    //Creacion texto plano
    FILE *text_flat = fopen("analisis.txt","w");
    fprintf(text_flat,/*"Tiempo insertsort: %f\n */"Tiempo quicksort: %f\nTiempo radixsort: %f\n1000000.000000 = 1 sec"/*,Insert_t*/,Quick_t , Radix_t);
    fclose(text_flat);
    return 0;
}