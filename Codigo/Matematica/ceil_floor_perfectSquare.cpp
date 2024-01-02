// Time Complexity: O(sqrt(n))
// Auxiliary Space: O(1)
#include <bits/stdc++.h>

bool isPerfectSquare(long double n){
    if(floor(sqrt(n)) == ceil(sqrt(n))) return true;
    else return false;
}