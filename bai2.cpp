#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Nhap nhiet do theo Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("nhiet do the fahrenheit la %.2f\n", fahrenheit);

    return 0;
}
