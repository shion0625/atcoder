#include<bits/stdc++.h>
using namespace std;
int N;

int ans() {
  int count = 0;
  for (int i = 0; i <= N / 4; i++) {
    for (int j = 0; j <= N / 7; j++) {
      int sum = i * 4 + j * 7;
      if (sum == N) {
        count++;
      }
    }
  }
  return count;
}


int main(void) {
  cin >> N;
  int res = ans();
  if(res > 0 ){
    cout << "Yes" <<endl;
  } else {
    cout << "No" <<endl;
  }
  return 0;
}
