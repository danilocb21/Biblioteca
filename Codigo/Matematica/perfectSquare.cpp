#include <bits/stdc++.h>

// Time Complexity: O(log n)
// Auxiliary Space: O(1)
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

// Time Complexity: O(sqrt(n))
// Auxiliary Space: O(1)
bool isPerfectSquare(long double n){
    if(floor(sqrt(n)) == ceil(sqrt(n))) return true;
    else return false;
}