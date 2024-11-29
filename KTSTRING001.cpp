#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int check ;
        string s , ss , a , b;
            cin >> a >> b >> s >> a >> b >> ss;
            s.pop_back(); 
            s.pop_back(); s.erase(s.begin()); 
            ss.pop_back();ss.erase(ss.begin()); 
        int lnc = s.size() , lnb = ss.size() , ans = 0;
        if(lnc==0){cout << 0 << endl ; continue ;}
        if(lnb==0){cout << -1 << endl ; continue ;}
        for(int i=0; i<=lnb - lnc ; i++){  
            if(ss[i]==s[0]){ 
                check = 0 ;
                for(int j = 1 ; j<lnc ; ++j){
                    if(s[j]!=ss[i+j]){check = 1  ; break;}
                }
                if(check==0){cout << i <<  endl ; ans = 1 ; break ;}
            }
        }
        if(ans==0)cout << -1 << endl ;
    }
    return 0;
}