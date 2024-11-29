
#include<bits/stdc++.h>

using namespace std;

bool csc(long long a[],int n){
    if(n<2){
        return true ;
    }
    int d = a[1] - a[0];
    for(int i = 2 ; i < n ; i++){
        if(a[i] - a[i-1] != d){
            return false ;
        }
    }
    return true ;
}
int main(){
    int t ; cin >> t ;
    while(t--){
    int n ; cin >> n ;
     long long a[n] ;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    if(csc(a,n)){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
    }
    
}