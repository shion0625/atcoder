#include<bits/stdc++.h>
using namespace std;

//int main(void){
//  int K,S;
//  cin >> K >> S;
//  int sum;
//  int count = 0;
//  for(int i = 0; i <= K; i++) {
//    for(int j = 0; j <= K; j++) {
//      for(int l =0; l <= K; l++){
//        sum = i + j + l ;
//        if(sum == S) {
//          count++;
//        }
//      }
//    }
//  }
//  cout << count << endl;
//  return 0;
//}

int main(void){
  int K,S;
  cin >> K >> S;
  int count = 0;
  for(int i = 0; i <= K; i++) {
    for(int j = 0; j <= K; j++) {
     int  l = S - i - j;
     if(0 <= l && l <=K) {
       count++;
     }
    }
  }
  cout << count << endl;
return 0;
}
