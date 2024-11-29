#include<bits/stdc++.h>
using namespace std;

// hàm tìm ước số nt lớn nhất của 1 số
int sntmax(int n) {
    int maxPrime = -1;
  
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2) {
        maxPrime = n;
    }
    return maxPrime;
}
 int main(){
    int t ; cin>>t;
    while(t--){
        long long l,r;
        cin >> l >> r ;
        long long lonnhat=0;
        // duyệt từ r về l
        for(long long i=r;i>=l;i--){
            if(sntmax(i)>lonnhat) lonnhat=sntmax(i);
        }
        cout << lonnhat <<endl;
    }
}
