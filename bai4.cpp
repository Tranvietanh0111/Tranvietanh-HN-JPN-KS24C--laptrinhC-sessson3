#include <stdio.h>

int main() {
    float toan, van, anh, tong, trungBinh;
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Van: ");
    scanf("%f", &van);
    printf("Nhap diem mon Anh: ");
    scanf("%f", &anh);
    tong = toan + van + anh;
    trungBinh = tong / 3;
    printf("Tong diem: %.2f\n", tong);
    printf("diem trung binh: %.2f\n", trungBinh);

    return 0;
}
