// Bubble Sort
//
// comparações: C(n) = O(n^2)
// trocas: T(n) = O(n^2)
// adptativo: O(n) quando vetor está parcialmente ordenado

// Vantagens:
// algoritmo estável 
// simples

// Desvantagens:
// não adaptável
// muitas trocas

void bubbleSort(int *ar, int n){
    int i, aux;
    bool troca;

    do {
        troca = false;
        for(int i = 0; i < n - 1; i++){
            if(ar[i + 1] < ar[i]){
                aux = ar[i + 1];
                ar[i + 1] = ar[i];
                ar[i] = aux;
                troca = true;
            }
        }

    } while(troca);

    return;
}
