#include <bits/stdc++.h>

using namespace std;


int main() {
  long long f[10005], n, t;
  cin >> t;
  f[1]=1, f[2]=2;
  for(int i=3; i<=10005; ++i){
    f[i]=f[i-1]+f[i-2];
    if(f[i]>1000000005) break;
  }
  while(t--){
    cin >> n;
    int key=0;
    if(n==1) {
    cout << 4 << endl; continue;
    }
    for(int i=1; i<=10005; ++i){
        if(f[i]-i==n){
            key=f[i]-n; 
            break;
        }
        if(f[i]-i>n){
            key=i; 
            break;
        }
    }
    cout<< n+key-1 << endl ;
  }
return 0;
}
