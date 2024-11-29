#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , m ;
    cin >> n >> m ;
    vector<int> a(n) , b(m) ;
    unordered_map<int, int> pos ;
    for(int i=0 ;i<n;i++){
        cin >> a[i] ;
        if(pos.find(a[i]) == pos.end()){
            pos[a[i]] = i+1 ;                  // luu vi tri cua phan tu trong day a
        }
        else {
            pos[a[i]] = min(pos[a[i]],i+1);  // cap nhat vi tri nho nhat
        }
    }
    for(int i=0 ;i<m;i++){
        cin >> b[i] ;
    }
  for(int i =0 ;i<m ;i++){
    if(pos.find(b[i]) != pos.end()){
        cout << pos[b[i]] << " " ;
    }    
    else{
        cout << "0" << " " ;
  }
}
}
