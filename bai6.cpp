#include <stdio.h>

int main() {
    float canh, chieuCao, dienTich;
    printf("Nhap do da0i canh cua tam giac: ");
    scanf("%f", &canh);
    printf("Nhap chiau cao cua tam giac: ");
    scanf("%f", &chieuCao);
    dienTich = 0.5 * canh * chieuCao;
    printf("Dien t�ch caa tam gi�c l�: %.2f\n", dienTich);

    return 0;
}
