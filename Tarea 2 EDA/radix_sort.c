int maximo(int arr[], int tam) {
    int i , mayor = arr[0];
    for ( i = 1; i < tam; i++)
        if (arr[i] > mayor)
            mayor = arr[i];
    return mayor;
}

void countingSort(int arr[], int size, int pos) {
    int output[size];
    int i, count[10] = { 0 };
 
    for (i = 0; i < size; i++)
        count[(arr[i] / pos) % 10]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / pos) % 10] - 1] = arr[i];
        count[(arr[i] / pos) % 10]--;
    }
 
    for (i = 0; i < size; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int size) {
    int pos ; 
    int max = maximo(arr, size);
    for (pos = 1; max / pos > 0; pos*=10)
        countingSort(arr, size, pos);
}