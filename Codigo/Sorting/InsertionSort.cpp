// comparações C(n) = O(n^2)
// trocas T(n) = O(n^2)
// adaptativo O(n) quando vetor está parcialmente ordenado

// Vantagens:
// é bom quando o vetor está "quase" ordenado
// é um bom método quando se deseja adicionar poucos itens a um arquivo ordenado, pois o custo é linear

// Desvantagens:
// custo de comparações O(n^2)
// custo de movimentações O(n^2)
#include <bits/stdc++.h>

using namespace std;

void insertionSort(int *ar, int n){
    int i, j , aux;
    for(i = 1; i < n; i++){
        aux = ar[i];
        j = i - 1;
        while(j >= 0 && aux < ar[j]){
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = aux;
    }
    return;
}

int main(){ 
    

    return 0;
}