#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t  ; cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        vector<int> v(s.size(),1);   // khởi tạo 1 vector có s.size ptu và gán băng 1
        for(int i = 0; i<s.size(); i++) {
            s[i] = tolower(s[i]);              // chuyển các kí tự trong chuỗi s thành chữ thường
        } 
        for(int i = 0 ;i<s.size();i++){
            for(int j = 0 ;j<i ;j++){         
                if(s[i] > s[j]){          
                    v[i] = max(v[i],v[j]+1);  
                }
            }
        }
        cout <<  *max_element(v.begin(),v.end()) << endl ;  

    }
}