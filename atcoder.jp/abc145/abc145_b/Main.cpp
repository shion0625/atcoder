#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string r;
    cin >> r;
    string a;
    int count = 0;
    for(int i =0; i < n/2; i++) {
        a = a + r[i];
    }
  if(r == (a + a)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}