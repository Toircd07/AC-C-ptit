#include<iostream>

using namespace std ;

void thap_sang_nhi(long long n){
	if(n<2){
		cout << n  ;
	}
	else {
		thap_sang_nhi(n/2);
		cout << n % 2;
	}
}

int main(){
	int t ;
	cin >> t ;

	while(t--){
		long long n ;
		cin >> n;
		thap_sang_nhi(n) ;
		cout << endl ;
	}
}