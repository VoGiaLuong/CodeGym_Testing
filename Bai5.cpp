#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    do {
        cout << "Nhap so n (1 <= n <= 30): ";
        cin >> n;
        if (n < 1 || n > 30) {
            cout << "Vui long nhap so nguyen trong khoang 1 den 30.\n";
        }
    } while (n < 1 || n > 30);
    cout << "Day Fibonacci tu F(1) den F(" << n << "): ";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
