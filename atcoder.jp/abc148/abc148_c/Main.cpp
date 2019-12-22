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



int main() {
     ll a,b,r,x,tmp;
    cin >> a >> b;
    x = a*b;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }

    /* ユークリッドの互除法 */
    r = a % b;
    while(r!=0){
        a = b;
        b = r;
        r = a % b;
    }
    cout << x/b << endl;

    return 0;
}