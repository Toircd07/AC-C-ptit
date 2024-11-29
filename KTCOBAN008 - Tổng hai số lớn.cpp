#include <bits/stdc++.h>
using namespace std;

// Hàm tính tổng của hai số lớn được biểu diễn dưới dạng chuỗi
string addLargeNumbers(string num1, string num2) {
    // Đảm bảo num1 luôn là số lớn hơn hoặc bằng num2
    if (num1.length() < num2.length()) {
        swap(num1, num2);
    }

    // Đảo ngược các chuỗi để dễ dàng tính toán từ phải sang trái
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    string result = "";
    int carry = 0;

    // Tính tổng từng chữ số
    for (size_t i = 0; i < num2.length(); i++) {
        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    // Thêm các chữ số còn lại của num1
    for (size_t i = num2.length(); i < num1.length(); i++) {
        int sum = (num1[i] - '0') + carry;
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    // Thêm phần dư còn lại
    if (carry) {
        result.push_back(carry + '0');
    }

    // Đảo ngược kết quả để có số đúng
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    int t ; cin >> t ;
    while(t--){
    string n1;
    cin >> n1;
    string n2 ;
    cin >> n2 ;
    string result = addLargeNumbers(n1, n2);
    cout << result << endl;
    }
    
}
