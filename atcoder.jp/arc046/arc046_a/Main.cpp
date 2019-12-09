#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main(void) {
    int  count = 9, n,j=0;
    bool num = true;
    vector<int> data(6);
    cin >> n;
    if(n <= 9) {
        cout << n << endl;
        return 0;
    }
    rep3(k,10,555555) {
        int i = k;
        while(i > 0) {
            data.at(j) = i % 10;
            i /=10;
            if(j > 0 && data.at(j) != data.at(j-1)) {
                num = false;
            }
            j++;
        }
        j = 0;
        if(num) {
            count++;
        }
        if(count == n) {
            cout << k << endl;
            return 0;
        }
        num = true;
    }
    return 0;
}

