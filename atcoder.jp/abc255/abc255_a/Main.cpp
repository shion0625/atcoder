#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0; i<b; ++i)

int main(){
    int r,c;
    vector<vector<int>> a(2, vector<int>(2));
    cin >> r >> c;
    rep(i,2){
        rep(j,2){
            cin >> a[i][j];
        }
    }
    cout << a[r-1][c-1] << endl;
    return 0;
}