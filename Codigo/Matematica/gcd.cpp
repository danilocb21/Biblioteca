// Time Complexity: O(log min(a,b))
// Auxiliary Space: O(log min(a,b))
#include <bits/stdc++.h>

using namespace std;

int recursive_gcd(int a, int b){
    if(b == 0) return a;
    else return recursive_gcd(b, a % b);
}

int non_recursive_gcd(int a, int b){
    while(b){
        a %= b;
        swap(a, b);
    }
    return a;
}