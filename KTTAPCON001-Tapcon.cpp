#include<bits/stdc++.h>
const int MOD=1e9+7;
using namespace std;

int main(){
   int t ; cin >> t ;
   while(t--){
    long long   a[100005], b[100005], c;
    map<long long,int>cnt;
    int n  ; cin >> n ;
    for(int i = 1 ; i <= n ; i++){ 
        cin >> a[i];
        cnt[a[i]] = 0 ;
    }
    sort(a+1,a+n+1);
     c=0;
    for(int i = 1 ; i <= n ; i++){
      cnt[a[i]]++;
      if(cnt[a[i]]==1) b[++c]=a[i];
    }
    long long ans=1;
    for(int i=1;i<=c;i++) ans=(ans*(cnt[b[i]]+1))%MOD;
    cout<<(ans-1+MOD)%MOD<<" ";
    c=0;
   for(int i=1 ;i<=n;i++) if(a[i]>=0) b[++c]=a[i];
   if(c>1){
      cout<<"["<<b[1]<<", ";
      for(int i=2;i<=c-1;i++) cout<<b[i]<<", ";
      cout<<b[c]<<"]";
      cout<<'\n';}
    else if(c==1){
      cout<<"["<<b[1]<<"]"<<'\n';
    }
    else{
      cout<<"["<<a[n]<<"]"<<'\n';
    }
   }
}