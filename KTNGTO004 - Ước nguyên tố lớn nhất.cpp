#include <bits/stdc++.h>
using namespace std;
void nt(long long n){
	long long res;
    while(n%2==0){
        res = 2;
        n=n/2;
    }
	for(int i = 3;i<=sqrt(n);i+=2){
		while(n%i==0){
			res = i;
			n=n/i;
		}
	}
	if(n!=1){
		res  = n;
	}
    cout<<res<<endl;
	return ;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
        nt(n);
	}
}