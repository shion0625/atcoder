#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define rep(i,n) for(ll i = 1; i <= (n); ++i)
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

//typedef pair<string,int> int_pair;
//typedef pair<int,string> pair;
//typedef pair<string,string> string_pair

void printVector(const vector<int>& vec) {
    cout << endl;
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin >> n >> k;
    vector<vector<int>> vec(n+5,vector<int>(n+5));
    rep(i,n) {
        rep(j,n) {
            cin >> vec[i][j];
        }
    }

    vector<int> nums(n-1);
    iota(nums.begin(), nums.end(), 2);
    int count =0, cans = 0;
    int ans = 0;
    do {
        rep(i,nums.size()+1) {
            if(count == 0) {
                ans += vec[1][nums[count]];
            }else if(count == n-1) {
                ans += vec[nums[count-1]][1];
                if(ans == k) {
                    cans++;
                }
                count =-1;
                ans = 0;
            }else {
                ans += vec[nums[count-1]][nums[count]];
            }
            count++;
        }
    } while (next_permutation(nums.begin(), nums.end()));
    cout << cans;
    return 0;
}

