#include<stdio.h>
#include<math.h>
int main(void) {
	int i, n;
	float s,h;
	scanf("%d",&n);
	float j[n];
	for(i=0;i<n;i++) {
		scanf("%f",&j[i]);
		s = s + (1.0/j[i]); 
   }
	 h=1/s;
		printf("%f",h);
}
