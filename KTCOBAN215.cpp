#include<bits/stdc++.h>
#define ll long long
using namespace std;
void gt(ll a[], ll n, ll k){
    ll tich, r = 0, m = 1;
    a[0] = 1;
    for(int i = n-k+1; i<=n ;i++){
        for(int j = 0; j<m; j++){
            tich = a[j]*i + r; 
            a[j] = tich % 10000;
            r = tich / 10000; 
        }
        while(r>0) {
            a[m] = r%10000;
            r /= 10000;
            m++;
        }
    }
    cout<<a[m-1];
    for(int i = m-2; i>=0; i--){
        cout<<setw(4)<<setfill('0')<<a[i];
    }
}
int main (){
    int tc;cin>>tc;
    while(tc--){
        ll n,k;
        cin>>n>>k;
        ll a[10000];
        gt(a,n,k);
        cout<<endl;
    }
    return 0;
}