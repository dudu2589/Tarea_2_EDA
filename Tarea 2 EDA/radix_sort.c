int maximo(int arr[], int tam) {
    int mayor = arr[0];
    for (int i = 1; i < tam; i++)
        if (arr[i] > mayor)
            mayor = arr[i];
    return mayor;
}

void countingSort(int arr[], int size, int pos) {
    int B[size] , i , ind_sgte , veces;
    int max = (arr[0] / pos) % 10;

    for(i = 1; i < size; i++) {
        if (((arr[i] / pos) % 10) > max)
            max = (arr[i] / pos) % 10;
    }
    int count[max + 1];

    for(i = 0; i < max; ++i)
        count[i] = 0;

    for(i = 0; i < size; i++)
        count[(arr[i] / pos) % 10]++;

    ind_sgte = 0;

    for(i=0;i<size;i++){
        veces = count[i];
        count[i] = ind_sgte;
        ind_sgte += veces;
    }

    for(i=0;i<size;i++){
        B[count[(arr[i]/pos) % 10]] = arr[i];
        count[(arr[i]/pos) % 10]++;
    }
}

void radixsort(int arr[], int size) {
    int pos ; 
    int max = maximo(arr, size);
    printf("%d\n",max);
    for (pos = 0; (max / pow(10,pos)) > 0; pos++)
        countingSort(arr, size, pow(10,pos));
}