#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Nhap so luong phan tu n (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap mot so nguyen duong lon hon 0.\n";
        }
    } while (n <= 0);

    int arr[n];
    cout << "Nhap " << n << " so nguyen:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxDiv3 = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            if (maxDiv3 == -1 || arr[i] > maxDiv3) {
                maxDiv3 = arr[i];
            }
        }
    }

    if (maxDiv3 != -1) {
        cout << "So lon nhat chia het cho 3: " << maxDiv3 << endl;
    } else {
        cout << "khong co" << endl;
    }

    return 0;
}
