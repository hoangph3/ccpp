#include "sSinhVien.h"

/* Khai báo Hàm nhập dữ liệu cho mảng lưu dữ liệu cho sinh viên thuộc kiểu sSinhvien */
void nhapSinhVien(sSinhvien sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ma so sinh vien: ");
        scanf("%d", &sv[i].maSoSinhVien);
        printf("Ten sinh vien: ");
        scanf("%s", sv[i].tenSinhVien);
        printf("Diem trung binh: ");
        scanf("%f", &sv[i].diemTrungBinh);
    }
}

/* Khai báo Hàm xuất dữ liệu ra màn hình cho một mảng lưu dữ liệu sinh viên thuộc kiểu sSinhvien */
void xuatSinhVien(sSinhvien sv[], int n) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ma so sinh vien: %d\n", sv[i].maSoSinhVien);
        printf("Ten sinh vien: %s\n", sv[i].tenSinhVien);
        printf("Diem trung binh: %.2f\n", sv[i].diemTrungBinh);
    }
}

/* Khai báo Hàm sắp xếp dữ liệu theo thứ tự giảm dần theo điểm trung bình cho mảng dữ liệu sinh viên thuộc kiểu sSinhvien */
void sapXepSinhVien(sSinhvien sv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diemTrungBinh < sv[j].diemTrungBinh) {
                // Hoan doi thong tin giua hai sinh vien
                sSinhvien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}