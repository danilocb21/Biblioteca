#include <bits/stdc++.h>
typedef long long ll;

// result = a^b % m 
// Time Complexity = O(log b)
ll binpow(ll a, ll b, ll m){
    ll result = 1;
    while(b > 0){
        if(b & 1) result *= a % m;
        b *= a % m;
        b >>= 1;
    }
    return result;
}