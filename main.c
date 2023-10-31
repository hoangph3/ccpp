#include <stdio.h>
#include "sSinhVien.c"

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    sSinhvien sinhVien[n];

    nhapSinhVien(sinhVien, n);
    sapXepSinhVien(sinhVien, n);
    xuatSinhVien(sinhVien, n);

    return 0;
}