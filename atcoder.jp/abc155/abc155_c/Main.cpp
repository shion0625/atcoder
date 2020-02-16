#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(i,k,h) for(int i = k; i <= h; ++i)
#define INF LONG_LONG_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;

bool my_compare(pair<int, string> a, pair<int, string> b) {
    if(a.first != b.first){
        return a.first > b.first; // 降順
    }
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        // どちらも同じ
        return true;
    }
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, string>> str(n);
    vector<string> s(n);
    rep(i, n) {
        cin >> s.at(i);
    }
    sort(s.begin(), s.end());
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            str.at(i).second = s.at(i);
            str.at(i).first = count;
            continue;
        }
        if (s.at(i) == s.at(i - 1)) {
            ++count;
            str.at(i).second = s.at(i);
            str.at(i).first = count;
        } else {
            str.at(i).second = s.at(i);
            str.at(i).first = 1;
            count = 1;
        }

    }
    sort(str.begin(), str.end(), my_compare);
    for(int i = 0; i < n; i++) {
       if (i == 0) {
            cout << str.at(i).second << endl;
            continue;
        }
        if (str.at(i).first == str.at(i - 1).first) {
            cout <<  str.at(i).second << endl;
        } else {
            return 0;
        }


    }
}

