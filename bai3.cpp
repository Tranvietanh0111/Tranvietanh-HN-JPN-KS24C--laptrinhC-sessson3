#include <stdio.h>

int main() {
    float r, dientich, chuvi;
    printf("nhap ban kinh r:");
    scanf("%f", &r);
    chuvi= 2*3.14*r;
    dientich= r*r*3.14;
    printf("chu vi hinh tron la %.2f\n", chuvi);
    printf("dien tich hinh tron la %.2f", dientich);
    

    return 0;
}
