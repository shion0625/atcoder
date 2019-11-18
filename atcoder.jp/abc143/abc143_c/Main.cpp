#include <iostream>
#include <vector>
#include <string>
#define ll long long; int
using namespace std;


int main(void) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == s[i + 1]) {
            count++;
        }
    }
    int ans = n - count;
    cout << ans << endl;
    return 0;
}