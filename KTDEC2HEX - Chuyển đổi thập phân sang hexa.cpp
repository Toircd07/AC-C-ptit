#include <iostream>

using namespace std;

void dec_to_hex(long long n){
   if(n < 16){
      if(n < 10){
         cout << n  ;
      }
      else{
         cout << (char)(n + 55) ;
      }
   }
   else{
      dec_to_hex(n / 16);
      int r = n % 16;
      if(r < 10){
         cout << r  ;
      }
      else{
         cout << (char)(r + 55) ;
      }
   }
}

int main(){
   int t ; cin >> t ;
   while(t--){
   long long n ; cin >> n ;
    dec_to_hex(n) ;
    cout << endl ;
   	
   }
}