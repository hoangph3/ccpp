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

#endif
