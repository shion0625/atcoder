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
    string s;
    cin >> s;
    int a = s[0] - 48, b = s[1]-48, c = s[2]-48, d = s[3]-48;
    if(a+b+c+d == 7) {
        printf("%d+%d+%d+%d=7\n",a,b,c,d);
    }
    else if(a-b+c+d == 7){
        printf("%d-%d+%d+%d=7\n",a,b,c,d);
    }
    else if(a+b-c+d == 7) {
        printf("%d+%d-%d+%d=7\n",a,b,c,d);
    }
    else if(a+b+c-d == 7) {
        printf("%d+%d+%d-%d=7\n",a,b,c,d);
    }
    else if(a-b-c+d == 7) {
        printf("%d-%d-%d+%d=7\n",a,b,c,d);
    }
    else if(a+b-c-d == 7) {
        printf("%d+%d-%d-%d=7\n",a,b,c,d);
    }
    else if(a-b+c-d == 7) {
        printf("%d-%d+%d-%d=7\n",a,b,c,d);
    }
    else if(a-b-c-d == 7) {
        printf("%d-%d-%d-%d=7\n",a,b,c,d);
    }
    return 0;
}
