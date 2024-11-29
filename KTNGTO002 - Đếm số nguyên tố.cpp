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
int dem(int l , int r){
	int cnt = 0;
	for(int i=l ;i<=r ;i++){
		if(prime[i]){
			cnt++ ;
		}
	}
	return cnt ;
}
int main(){
	sang();
	int t; cin >> t ;
	while(t--){
		int l , r ;
		cin >> l >> r ;
		cout << dem(l,r) << endl ;
	}
}