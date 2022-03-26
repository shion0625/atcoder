#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0; i<b; ++i)

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >>k;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    bool ansA = true, ansB = true;
    rep(i,n-1){
        int ca = 0,cb=0;
        if(ansA){
            if(abs(a[i] - a[i+1]) <= k) {
                ansA=true;
                ca++;
            }
            if(abs(a[i] - b[i+1]) <= k){
                ansB=true;
                cb++;
            }
        }
        if(ansB){
            if(abs(b[i] - a[i+1]) <= k){
                ansA=true;
                ca++;
            }
            if(abs(b[i] - b[i+1]) <= k){
                ansB=true;
                cb++;
            }
        }
        if(ca == 0) ansA=false;
        if(cb == 0) ansB=false;

        if(!ansA && !ansB){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}


