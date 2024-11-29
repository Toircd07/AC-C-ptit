#include<bits/stdc++.h>
using namespace std;

long long bin_to_dec(string bin) {
    long long dec = 0; // lưu kết quả thập phân
    int length = bin.length(); // độ dài của chuỗi nhị phân
    
    for (int i = 0; i < length; i++) {  
        // nếu bit tại vị trí i là 1 thì cộng 2^i vào kết quả
        if (bin[length - i - 1] == '1') {
            dec += (1LL << i); // Sử dụng dịch bit để tính 2^i
        }
    }
    
    return dec; 
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // loại bỏ ent
    while (t--) {
        string s;
        getline(cin, s);
        long long dec = bin_to_dec(s);
        cout << dec << endl;
    }
    return 0;
}