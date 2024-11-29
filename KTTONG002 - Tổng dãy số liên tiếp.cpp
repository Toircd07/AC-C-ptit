#include <bits/stdc++.h>

using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        long long l , r ;
        cin >> l >> r ;
        long long sum = (l+r)*(l-r+1)/2;
        cout << sum << endl;
    }
}