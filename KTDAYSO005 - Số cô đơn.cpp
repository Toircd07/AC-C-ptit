#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >>t;
    while(t--){
     int n;
     cin >>n;
     int a[n];
     map<int,int> dem;
    for(int i = 0 ;i<n;i++) cin >> a[i],dem[a[i]]++;
    int cnt=0;
    for(int i = 0 ;i<n;i++){
        if(dem[a[i]] == 1) cnt++,dem[a[i]]=0;
    }
    cout <<cnt <<endl;
    }
}