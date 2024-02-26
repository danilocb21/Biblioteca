#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
using namespace std;

int n;
int cnt = 0;

void add(int col, vector<int> &queens) {
    queens.pb(col);
}

void rem(vector<int> &queens) {
    queens.pop_back();
}

bool valid(int row, int col, vector<int> &queens) {
    for(int i = 0; i < queens.size(); i++) {
        // same column
        if(col == queens[i]) return false;
        // same diagonal
        if(abs(row - i) == abs(col - queens[i])) return false;
    }
    return true;
}

void backtracking(int row, vector<int> &queens) {
    if(row == n) {
        cnt += 1;
        return;
    }
    for(int col = 0; col < n; col++) {
        if(valid(row, col, queens)) {
            add(col, queens);
            backtracking(row + 1, queens);
            rem(queens);
        }
    }
}

int main(){ _
    cin >> n; // number of rows = columns
    vector<int> vec;
    backtracking(0, vec);
    cout << cnt << endl;

    return 0;
}