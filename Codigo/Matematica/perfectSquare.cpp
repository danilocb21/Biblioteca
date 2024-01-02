// Time Complexity: O(log n)
// Auxiliary Space: O(1)
#include <bits/stdc++.h>

bool isPerfectSquare(long double n){
    if(n >= 0){
        // se a raiz de n é inteira não haverá arredondamento para o menor inteiro
        long long sr = sqrt(n);

        // verifica se houve o arredondamento e retorna a reposta
        return (sr * sr == n);
    }

    //retorna falso caso x < 0
    return false;
}