#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string ten;
    float diemToan;
    float diemLy;
    float diemHoa;
};

int main() {
    int n;
    do {
        cout << "Nhap so luong sinh vien (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap so nguyen duong lon hon 0.\n";
        }
    } while (n <= 0);

    SinhVien danhSach[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        cin.ignore();
        cout << "Ten: ";
        getline(cin, danhSach[i].ten);
        cout << "Diem Toan: ";
        cin >> danhSach[i].diemToan;
        cout << "Diem Ly: ";
        cin >> danhSach[i].diemLy;
        cout << "Diem Hoa: ";
        cin >> danhSach[i].diemHoa;
    }
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    for (int i = 0; i < n; i++) {
        float diemTB = (danhSach[i].diemToan + danhSach[i].diemLy + danhSach[i].diemHoa) / 3;
        if (diemTB >= 8) {
            cout << "Ten: " << danhSach[i].ten << ", Diem TB: " << diemTB << endl;
        }
    }

    return 0;
}
