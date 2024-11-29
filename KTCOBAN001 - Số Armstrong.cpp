#include<iostream>
#include<math.h>

using namespace std;

int dem(int n){
	int cnt = 0;
	while ( n > 0){
		++ cnt ;
		n/=10 ;
	}
	return cnt ;
}

bool strong(int n){
	int sochuso = dem(n);
		int tmp = n , sum = 0 ;
	while (n >0){
	   sum+= (int)pow(n%10,sochuso);
	   n/=10 ;
   }
   return sum==tmp ;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
      if(strong(n) == 1 ) {
	  cout << "1" << endl ;
}
	  else {
	  cout << "0" << endl;
}
}
}