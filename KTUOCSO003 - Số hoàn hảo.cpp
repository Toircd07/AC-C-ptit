#include <iostream>
#include<math.h>

using namespace std;

bool hh( long long n){
	// loai 1 ko phai so hh 
	if( n <=1){
		return false;
	}
	
	long long sum = 1; //khoi tao tong uoc bat dau tu 1
	
	// duyet tu 2 den can bac 2 cua n
	for( int i = 2; i <= sqrt( n); i++ ){
		if( n % i ==0){
			sum+= i;
			// them tat ca cac uoc doi dien neu i khong phai can bac 2 cua n
			if( i != n/i){
				sum += n/i;
			}
		}
	}
	if( sum == n){
		return true;
	}
	else {
		return false;
	}
}
int main(){
	int t; cin>> t;
	while(t--){
		long long n; cin >>n;
		if(hh(n) ){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
}