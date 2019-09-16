#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define rep2(i,n) for(int i = 1; i < n; i++)

int main(void){
  string s;
  cin >> s;
  if(s == "Sunny") {
    cout << "Cloudy" << endl;
  } else if(s == "Cloudy"){
    cout << "Rainy" << endl;
  } else {
    cout << " Sunny" << endl;
  }
 return 0;
}

