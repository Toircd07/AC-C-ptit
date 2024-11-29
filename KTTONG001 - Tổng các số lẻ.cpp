#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	
     int t; cin >>t;
    while(t--){
        ll a, b;
        cin >> a >>b;
        ll sum = 0;
        if(a % 2 == 0 && b % 2 == 0){  // a va b chan
            int k = (b - a)/2;
            sum = k*(b + a)/2;
        }
        if(a % 2 == 0 && b % 2 != 0){  // a chan b le
            int k = (b - a + 1)/2;
            sum = k*(b + a + 1)/2;
        }
        if(a % 2 != 0 && b % 2 != 0){   // a va b le
            int k = (b - a + 2)/2;
            sum = k*(b + a )/2;
        }
        if(a % 2 != 0 && b % 2 == 0){   // a le b chan
            int k = (b - a + 1)/2;
            sum = k*(b + a - 1)/2;
        }
        cout << sum <<endl;
    }

    return 0;
}