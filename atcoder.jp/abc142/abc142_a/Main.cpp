#include <iostream>
using namespace std;

int main(){
  double odd, ans, even;
  int n;
  cin >> n;

  if(n % 2 == 1){
  odd = (n / 2) + 1;

  ans = odd / n;

  cout << ans << endl;
  }else{
    cout << "0.5000000000" << endl;
  }
  return 0;
}