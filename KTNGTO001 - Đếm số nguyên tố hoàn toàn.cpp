#include<bits/stdc++.h>
#include<vector>
using namespace std ;

const int max1 = 1000000;

vector<bool> prime( max1+1, true);

void sang(){
	prime[0]=prime[1]= false ;
	for(int i=2 ; i*i <= max1 ; i++){
		
		if(prime[i]){
			
		for(int j=i*i ; j <= max1 ; j+=i){
			prime[j] = false ;
		}
	}	
  }
}
int chusont(int n){
	while(n){
		int r = n % 10 ;
		if(r != 2 && r != 3 && r != 5 && r!= 7){
			return 0;
		}
		n/=10;
	}
	return 1 ;
}
int main(){
	sang();
	int t; cin >> t ;
	while(t--){
		int n ; cin >> n ;
		int dem = 0;
		for(int i=1 ;i<= n;i++){
			if(prime[i] && chusont(i)){
				++dem ;
			}
		}
	    cout << dem << endl ;
	}
}