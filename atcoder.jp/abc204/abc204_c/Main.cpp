#include <bits/stdc++.h>
using namespace std;

#define rep(i,b) for(int i=0; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>b; --i)

#define repl(i,b) for(ll i=0; i<b; ++i)
#define repl1(i,a,b) for(ll i=a; i<b; ++i)
#define rrepl1(i,a,b) for(ll i=a; i>b; --i)

# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size)

//エイリアス
typedef long long ll;
typedef long unsigned long ull;
typedef long double ld;
typedef pair<ll, ll> ll_pair;
typedef pair<double, double> DoP;
typedef pair<int, int> int_pair;
typedef pair<int, string> pair;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf
const int MOD = 1000000007;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }


//void dfs(const Graph &G, int v) {
//    seen[v] = true;
//    for (auto next_v : G[v]) {
//        if (seen[next_v]) continue; // next_v が探索済だったらスルー
//        dfs(G, next_v); // 再帰的に探索
//    }
//}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >>m;
    vector<vector<int>> to(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        --a;--b;
        to[a].push_back(b);
    }
    int ans=0;
    rep(i,n){
        queue<int> q;
        vector<int> seen(n);
        ++ans;
        seen[i]=1;
        q.push(i);
        //  iからNがたどり着く場所がseenで分かりansで何個の場所にたどり着くかが分かる。
        while(!q.empty()){
            int v=q.front(); q.pop();
            for(int nx : to[v]){
                if(seen[nx]) continue;
                ++ans;
                seen[nx]=1;
                q.push(nx);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
