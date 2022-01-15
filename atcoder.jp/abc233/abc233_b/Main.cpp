#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

typedef pair<string,int> int_pair;
//typedef pair<int,string> pair;
//typedef pair<string,string> string_pair;

int main() {
    int x,y;
    string s,ss="",k="";
    cin >> x >> y >> s;
    x=x-1;
    y=y-1;
    rep(i,s.length()+1) {
        if(x<= i && i <= y){
            k = s[i] +k;
            continue;
        }else {
            if(k != "") {
                ss+=k;
                k="";
            }
            ss +=s[i];
        }
    }
    ss.replace(ss.length()-1,1,"");
    cout << ss;
    return 0;
}

