#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(i,k,h) for(int i = k; i <= h; ++i)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;

int main(){
    ll a, k,t,i,inc, k0;
    cin >> a >> k;
    if(k == 0) {
        k0 =2* 1e12-a;
        cout << k0;
        return 0;
    }
    t =a;
    while(t <2 * 1e12) {
        i++;
        inc = t*k +1;
        t += inc;
    }
    cout << i << endl;


}

