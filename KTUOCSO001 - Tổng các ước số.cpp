#include<iostream>
#include<math.h>

using namespace std ;


	
int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n ;
	    long long sum = 0 ;
		for(int i = 1 ; i< n ; i++){
			if( n%i == 0) sum+=i ;
			}
			cout << sum << endl ;
		}
	}