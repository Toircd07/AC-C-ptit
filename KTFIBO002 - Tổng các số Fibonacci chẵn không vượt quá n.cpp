#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[100005];
int main() {
	int t ;
     cin >> t;
     f[1]=1, f[2]=1; // so fibo thu 1 va 2
  for(int i=3; i<=10005; ++i){
        f[i]=f[i-1]+f[i-2];
      if(f[i]>1000000005) break;
  }
  while(t--){
	ll n ;
    cin >> n;
    ll sum=0;
    for(int i=1; i<=10005; ++i){
        if(f[i]>n) break;    // ko vuot qua n
        if(f[i]%2==0) sum+=f[i];  // tong ca so fibo chan
    }
    cout<< sum << endl ;
  }
return 0;
}