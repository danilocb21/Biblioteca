// Selection Sort
//
// comparações C(n) = O(n^2)
// trocas T(n) = O(n)

// Vantagens:
// bom quando a operação de trocar for muito cara

// Desvantagens:
// não adaptável
// não é estável

void selectionSort(int *ar, int n){
    int i, j;
    int menor, indexMenor;

    for(i = 0; i < n; i++){
        menor = ar[i];
        for(j = i + 1; j < n; j++){
            if(ar[j] < menor){
                indexMenor = j;
                menor = ar[j];
            }
        }
        ar[indexMenor] = ar[i];
        ar[i] = menor;
    }
    return;
}
