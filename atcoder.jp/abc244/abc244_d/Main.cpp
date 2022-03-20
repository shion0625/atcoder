#include <bits/stdc++.h>
using namespace std;

#define rep(i,b) for(int i=0; i<b; ++i)


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    char s1,s2,s3,t1,t2,t3;
    cin >> s1 >> s2 >> s3 >> t1 >> t2 >>t3;
    int count=0;
    rep(i,20){
        if(s1 != t1){
            if(s2 ==t1) {
                swap(s1,s2);
                count++;
                continue;
            }
            if(s3 ==t1) {
                swap(s1,s3);
                count++;
                continue;
            }
        }
        if(s2 != t2){
            swap(s2,s3);
            count++;
        }
        break;
    }
    if(count %2 == 0) cout << "Yes" << endl;
    else  cout << "No" << endl;
    return 0;
}

