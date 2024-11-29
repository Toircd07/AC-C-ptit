#include<iostream>
#include<math.h>

using namespace std ;

int main(){
	int t;
	cin >> t ;
	while(t--){
		long long a , b ;
		cin >> a >> b ;
		int ca = sqrt(a) , cb = sqrt(b);
		if(ca*ca != a) ++ca ;
		cout << cb - ca + 1 << endl ;
		
	}
}