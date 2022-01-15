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
    string x;
    cin >> x;
    int a = x[0]- '0';
    int b = x[1]- '0';
    int c = x[2]- '0';

    cout << (a+b+c)*100+(a+b+c)*10+a+b+c;

    return 0;
}

