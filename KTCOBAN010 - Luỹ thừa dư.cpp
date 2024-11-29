

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

unsigned long long bruh(unsigned long long a, unsigned long long n, unsigned long long mod) {
    unsigned long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        n /= 2;
    }
    return result;
}

int main() {
    int t ; cin >> t ;
    while(t--){
    unsigned long long a, n;
    cin >> a >> n;
    cout << bruh(a, n, MOD);
        cout << endl ;
    }
}
       