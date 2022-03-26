#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0; i<b; ++i)

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >>n;
    set<int> st;
    rep(i,n) {
        int a;
        cin >> a;
        st.insert(a);
    }

    rep(i,2001){
        if(st.count(i) == 0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}

