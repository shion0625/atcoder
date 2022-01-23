#include <bits/stdc++.h>


using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)

//エイリアス
#define  ll = long signed long;
#define ull = long unsigned long;
#define  ld = long double;
#define   P = pair<int, int>;
#define llP = pair<ll, ll>;
#define DoP = pair<double, double>;
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

//typedef pair<string,int> int_pair;
//typedef pair<int,string> pair;
//typedef pair<string,string> string_pair

//void printVector(const vector<int>& vec) {
//    cout << endl;
//    for (int value : vec) {
//        cout << value << " ";
//    }
//    cout << endl;
//}

//vector<vector<int>> vec(n, vector<int>(n));
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
bool reached[501][501];
int h,w;
vector<vector<char>> cw(501, vector<char>(501));
bool ans = false;

void dfs(int y,int x) {
    reached[x][y]=true;
    rep(i,4){
        int ny = y + dy[i], nx = x + dx[i];
        if(!reached[nx][ny] && 0 <= ny && ny < h && 0 <= nx && nx < w && cw[ny][nx] != '#') {
            if(cw[ny][nx] == 'g') {
                ans = true;
            }
            dfs(ny,nx);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> h >> w;
    int sx,sy;
    rep(i,h) {
        rep(j,w) {
            cin >>cw[i][j];
            if(cw[i][j] == 's') {
                sx=j;
                sy=i;
            }
        }
    }

    dfs(sy,sx);
    if(ans) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }

    return 0;
}