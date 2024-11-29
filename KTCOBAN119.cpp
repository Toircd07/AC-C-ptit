#include <bits/stdc++.h>

using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        int n , k ; 
        cin >> n >> k ;
        long long res = 0 ;
        for(int i = 0 ; i<= n ;i++){
            int tmp = i ;
            int dem = 0 ;
            while(tmp > 0){
                if(tmp%2==0) dem++; // dem so luong so 0
                tmp/=2;             // chia 2 de kiem tra tiep
            }
            if(dem == k) res++ ;   // neu so luong so 0 = k thi tang bien res
        }
        cout << res << endl;
    }
}