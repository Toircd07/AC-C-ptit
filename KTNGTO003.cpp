#include<bits/stdc++.h>

using namespace std;

bool nt(long long n){
  if(n==0 || n==1) return 0;
  if(n==2 || n==3) return 1;
  if(n%2==0 || n%3==0) return 0;
  for(int i=3; i<=sqrt(n); i+=2) 
      if(n%i==0) 
     return 0;
  return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
for(long long  i=n; i<=10*n; ++i){
 if(i%2!=0) if(nt(i-2)==1 && nt(i)==1) {
    cout << i << endl ; break;
    }
  }
}
}