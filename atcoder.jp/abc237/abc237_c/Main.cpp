#include <bits/stdc++.h>


using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)

//エイリアス
using ll = long unsigned long;
using ull =  long unsigned long;
using ld = long double;
using P = pair<int, int>;
using llP = pair<ll, ll>;
using DoP = pair<double, double>;
#define INF = LONG_LONG_MAX; // ll INF
#define inf = INT_MAX; // int inf

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int k = 0,l=0;

    for(int i = s.length()-1 ; i > 0; --i) {
        if(s[i] == 'a') {
            k++;
        }else {
            break;
        }
    }

    for(int i = 0; i < k; i++) {
        if(s[i] == 'a') {
            l = i+1;
        }else {
            break;
        }
    }
    int las = s.length()-k;
//    cout << las << " " << s.length() << " k:"<< k << " l: " <<l << endl;
    int j = 1;
    bool f = true;
    for(int i = l; i < (las-l)/2 +l; i++) {
//        cout << s[i] << " " << s[las - j] << endl;
        if(s[i] != s[las - j]) {
            f =false;
//            break;
        }
        j++;
    }

    if(f) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}