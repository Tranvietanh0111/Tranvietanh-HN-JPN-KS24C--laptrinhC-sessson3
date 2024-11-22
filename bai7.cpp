#include <stdio.h>

int main(){
 
int number, sum, reverse, thousand, hundred, ten, unit;
printf("nhap so");
scanf("%d", &number);
thousand= number/1000;
hundred= (number/100)%10;
ten= (number/10)%10;
unit= number%10;
sum= thousand+hundred+ten+unit;
printf("tong cac chu so là %d\n", sum);

return 0;
}

