#include<stdio.h>
#include<math.h>
int main() {
  int A,B,X,Y,Z;
  scanf("%d %d",&A,&B);
  X=A+B;
  Y=A-B;
  Z=A*B;
  if(X>=Y&&X>=Z) {
     printf("%d",X);
  } else if (Y>=X&&Y>=Z) {
      printf("%d",Y);
  } else if(Z>=X&&Z>=Y) {
     printf("%d",Z);  
  }
}
