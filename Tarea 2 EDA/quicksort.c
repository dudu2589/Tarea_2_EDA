int partition(int arr[] , int inicio , int fin){
    int pivote = arr[inicio];
    int i = inicio - 1 ;
    int j = fin + 1 ;

    while (1){
        do{
            i++;
        }while(arr[i] < pivote);

        do{
            j--;
        }while(arr[j] > pivote);

        if(i >= j )
            return j;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    } 
}

void quicksort(int arr[], int inicio , int fin){
    if(inicio < fin ){

        int corte = partition(arr , inicio , fin);

        quicksort(arr, inicio, corte);
        quicksort(arr, corte + 1 , fin);
    }
}
