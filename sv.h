#include <stdio.h>
#include <string.h>

#ifndef __SSINHVIEN_H__
#define __SSINHVIEN_H__

/* Khai báo một kiểu dữ liệu miêu tả các thông tin của một SinhVien thuộc kiểu sSinhvien */
typedef struct {
    int maSoSinhVien; // Mã số sinh viên
    char tenSinhVien[50]; // Tên sinh viên
    float diemTrungBinh; // Điểm trung bình
} sSinhvien;

/* Khai báo một kiểu dữ liệu miêu tả thông tin của một SinhVien thuộc kiểu sSinhvien2 */
typedef struct {
    float diemTrungBinh; // Điểm trung bình
    int maSoSinhVien; // Mã số sinh viên
    char tenSinhVien[50]; // Tên sinh viên
    struct {
        int soLanHoc;
        float diem;
    } monHoc[4]; // Mảng lưu thông tin 4 môn học
} sSinhvien2;

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

#endif

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
