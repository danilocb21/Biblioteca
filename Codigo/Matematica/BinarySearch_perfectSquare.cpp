// Time Complexity: O(log n)
// Auxiliary Space: O(1)
#include <bits/stdc++.h>

bool isPerfectSquare(long long n){
    // caso 0 e 1
    if(n <= 1){
        return true;
    } 

    // limites da busca binária
    long long l = 1, r = n;
    long long square, mid;

    while(l <= r){
        // calcular valor do meio
        mid = (l + r) / 2;

        // calcular quadrado do termo do meio
        square = mid * mid;

        if(square == n){
            return true; 
        } 
        
        // buscar na direita
        else if(square < n){
            l = mid + 1;
        }
        
        // buscar na esquerda
        else {
            r = mid - 1;
        }

    }
    
    // caso saia do loop sem achar um quadrado perfeito
    return false;
}