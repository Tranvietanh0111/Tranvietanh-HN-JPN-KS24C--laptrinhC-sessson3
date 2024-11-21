#include <stdio.h>

int main() {
    float canh, chieuCao, dienTich;
    printf("Nhap do da0i canh cua tam giac: ");
    scanf("%f", &canh);
    printf("Nhap chiau cao cua tam giac: ");
    scanf("%f", &chieuCao);
    dienTich = 0.5 * canh * chieuCao;
    printf("Dien tích caa tam giác là: %.2f\n", dienTich);

    return 0;
}
