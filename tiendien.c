#include <stdio.h>


double giaDienBac6(int so_kWh) {
    double don_gia;

    if (so_kWh < 0) {
        return -1.0;
    } else if (so_kWh <= 50) {
        don_gia = 1728;
    } else if (so_kWh <= 100) {
        don_gia = 1786;
    } else if (so_kWh <= 200) {
        don_gia = 2074;
    } else if (so_kWh <= 300) {
        don_gia = 2612;
    } else if (so_kWh <= 400) {
        don_gia = 2919;
    } else {
        don_gia = 3015;
    }
        return don_gia * so_kWh;
    }


double giaDienBac5(int so_kWh) {
    double don_gia;

    if (so_kWh < 0) {
        return -1.0;
    } else if (so_kWh <= 100) {
        don_gia = 1728;
    } else if (so_kWh <= 200) {
        don_gia = 2074;
    } else if (so_kWh <= 400) {
        don_gia = 2612;
    } else if (so_kWh <= 700) {
        don_gia = 3111;
    } else {
        don_gia = 3457;
    }
        return don_gia * so_kWh;
    }


int main() {
    int so_kWh;
    double gia_dien_cu, gia_dien_moi;

    printf("Nhap so kWh: ");
    scanf("%d", &so_kWh);

    gia_dien_cu = giaDienBac6(so_kWh);
    gia_dien_moi = giaDienBac5(so_kWh);

    if (gia_dien_cu >= 0 && gia_dien_moi >= 0) {
        if (gia_dien_cu < gia_dien_moi) {
            printf("Tien dien tang len: %.2lf VND\n", gia_dien_moi - gia_dien_cu);
        }
        else if (gia_dien_cu == gia_dien_moi) {
            printf("Tien dien giu nguyen\n");
        }
        else {
            printf("Tien dien giam xuong: %.2lf VND\n", gia_dien_cu - gia_dien_moi);
        }
    }
    else {
        printf("So kWh khong hop le.\n");
    }
    return 0;
}