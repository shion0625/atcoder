#include <iostream>
#define ll long long int
using namespace std;


int main(void) {
    ll N;
    cin >> N;
    ll ans = 1e20;
    for(ll i = 1; i*i <= N; i++)/* i*iは小さい方の値は必ず√ｎ以下今回はｎを小さい方値にしてる　min(i,j)<=√nとなる*/ {
        if(N % i != 0) continue;
        ll j = N/i;
        ans = min(ans, i + j - 2);
    }
    cout << ans << endl;
    return 0;
}