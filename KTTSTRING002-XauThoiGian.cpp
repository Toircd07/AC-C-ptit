#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t;
    cin.ignore();
    while(t--){
        string tmp1 , tmp2 , s;
        cin >> tmp1 >> tmp2 >> s ;
        if(s[1]=='?' && s[2]=='?'){
            s[1] = '2';
            s[2] = '3';
        }
        if(s[1]=='?'){
            if(s[2] <= '3')
            s[1] = '2';
            else s[1] = '1';
        }
        if(s[2]=='?'){
            if(s[1] == '2')
            s[2] = '3';
            else s[2] = '9';
        }
        if(s[4] =='?'){
            s[4] = '5';
        }
        if(s[5]=='?'){
            s[5] = '9';
        }
        cout << s << endl ;
    }
}