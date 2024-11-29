#include<bits/stdc++.h>
using namespace std;

int banbe(int n){
	long long sum =0;
	for(int i=1 ;i<n;i++){
     if(n%i ==0){
		sum+=i ;
	 }
	}
	return sum ;
}

   
int main(){
	int t ;
	cin >> t ;

	while(t--){
		 long long a , b;
         cin >> a >> b;
		 // gọi hàm và in ra 
         if(banbe(a) == b && banbe(b) == a){
			cout << "YES" << endl ;
		 }
		 else cout << "NO" << endl ;
   }
}