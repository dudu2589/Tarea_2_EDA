int * read_bin(char * bin_file){
    FILE *in = fopen(bin_file,"rb");
    int allocate; //int to allocate the numbers
    int c = 0;// counter 
    int *arreglo = malloc(resolution*sizeof(int)); // 2 073 600 = 1920 x 1080
    if(in == NULL){
        printf("Archivo no encontrado");
        return NULL;
    }
    /*            push_info                  */
    while(fread(&allocate,sizeof(int),1,in) != 0){; 
    // (int to allocate the number , size to element to read, number of elements to read , bin file)
        arreglo[c] = allocate; 
        c++; // c++ in c XD , a classic .
    }

    /*          end push_info               */
    fclose(in);
    return arreglo;
}