// Quick Sort

void troca(int *ar, int i, int j){
    int aux;
    aux = ar[i];
    ar[i] = ar[j];
    ar[j] = aux;
    return;
}

int particao(int *ar, int l, int r){
    int i = 0, fim = 0;
    fim = l;
    for(i = l + 1; i <= r; i++){
        if(ar[i] < ar[l]){
            fim = fim + 1;
            troca(ar, fim, i);
        }
    }
    troca(ar, l, fim);
    return fim;
}

void quickSort(int *ar, int l, int r){
    int i = 0;

    if(l >= r) return;

    i = particao(ar, l, r);
    quickSort(ar, l, i - 1);
    quickSort(ar, i + 1, r); 
    
    return;
}
