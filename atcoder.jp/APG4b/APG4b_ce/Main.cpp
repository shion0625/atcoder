#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int N,M;
  cin >> N >>  M;
  vector<int> A(M),B(M);
  for(int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  vector<vector<char>> mach(N, vector<char>(N,'-'));
  for(int i = 0; i < M; i++) {
    //1~N → 0~N-1
    A.at(i)--;//decrease each number by -1
    B.at(i)--;//because mach.at().at() have not 0.
  mach.at(A.at(i)).at(B.at(i)) = 'o';
  mach.at(B.at(i)).at(A.at(i)) = 'x';
  }
for(int i = 0;  i < N; i++) {
  for(int j  =0; j < N; j++) {
    cout << mach.at(i).at(j);
    if( j == N - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
}
}
