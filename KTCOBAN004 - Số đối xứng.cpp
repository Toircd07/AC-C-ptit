#include <bits/stdc++.h>
using namespace std;

// Hàm đếm số lượng số đối xứng có k chữ số
int dem(int k) {
    if (k == 1) {
        return 9; // Các số từ 1 đến 9
    }

    int half = (k + 1) / 2; // Số chữ số ở nửa đầu
    int count = 9 * pow(10, half - 1); // Số lượng số đối xứng

    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        if (k < 1 || k > 18) {
            cout << "Khong hop le!" << endl;
        } else {
            cout << dem(k) << endl;
        }
    }
    return 0;
}