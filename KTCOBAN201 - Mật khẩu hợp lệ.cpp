

#include<bits/stdc++.h>
#define taskname "password"
#define taskname1 "res"
using namespace std;

int main(){
    ifstream infile("password.in");
    ofstream outfile("res.out");
    string s ;
    while(getline(infile,s)){ // đọc dữ liệu từ file password.in gán cho s
     int check = 1;
     int check1 = 0 , check2 = 0 , check3 = 0 , check4 = 0 , check5 = 1 ;
   
    if( s.size() <8 ){
          check = 0 ;
   }
   if(check)
   for(int i=0;i<s.size();i++){
   
    if(s[i] >= 'a' && s[i] <= 'z'){
        check1 = 1 ;
    }
    if(s[i] >= 'A' && s[i] <= 'Z'){
        check2 = 1 ;
    }
    if(s[i] >= '0' && s[i] <= '9'){
        check3 = 1 ;
    }
    if(ispunct(s[i])){
        check4 = 1 ;
    }
   
    if( i >0 && s[i] == s[i-1] ){
        check5 = 0;

    }
   }
   if(check1 == 1 && check2 == 1 && check3 == 1 && check4 == 1 && check5 == 1){
       outfile << "VALID" << endl ;
   }
   else{
       outfile << "INVALID" << endl ;
   }
   }  
    infile.close();
    outfile.close();
}