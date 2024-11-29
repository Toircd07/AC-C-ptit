#include <iostream>
#include<string>

using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
    // nhap so nguyuen duoi dang chuoi ki tu
    string n;
    cin >> n;
   // bo qua dau - 
    if (n[0] == '-') {
        cout  << n.length() - 1 << endl;
    } else 
        cout << n.length() << endl;
    }
}