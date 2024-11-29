#include<bits/stdc++.h>

const int MOD=1e9+7;
using namespace std;


long long kq(long long a, long long n){
    if(n==0) return 1;
    if(n==1) return a;
    if(n%2 == 0){
        long long tmp=kq(a,n/2);
        return (tmp*tmp)%MOD;
    }
    else{
        long long tmp = kq(a,n/2);
        return ((a*tmp)%MOD*tmp)%MOD;
    }
}
int main(){
	int t ;
  cin >> t;
  while(t--){
  	int a , b ;
    cin >>a >>b;
    cout <<kq(a,b) << endl;

  }
	return 0;
}