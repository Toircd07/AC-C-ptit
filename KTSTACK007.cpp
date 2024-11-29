#include<bits/stdc++.h>

using namespace std ;

int main(){
    int tc ; cin >> tc ;
    while(tc--){
     string s ;
    cin >> s ;
    int ans = 0 , tmp = 0;
    for(int i =0 ;i<s.length();i++){
        if(s[i]=='(') tmp++ ;
        else {
            if(tmp==0){ ans++ ; tmp++ ;}
            else tmp-- ;
        }
    }
    ans += tmp/2 ;
    cout << ans << endl ;
}
}