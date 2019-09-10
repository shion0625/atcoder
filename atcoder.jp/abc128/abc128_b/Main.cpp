#include<bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cin >> n;
  vector<tuple<string,int,int>> a;
  for(int id = 1; id <= n; id++){
    string s;
    int p;
    cin >> s >> p;
    p=-p;
    a.emplace_back(s,p,id);
    //a.push_back(tie(s,p,id));
  }
  sort(a.begin(),a.end());
  for(int i = 0; i < n; i++){
    string s;
    int p, id;
    tie(s,p,id) = a.at(i);
//    cout << get<2>(a.at(i)) << endl;
    cout << id << endl;
  }
  return 0;
}