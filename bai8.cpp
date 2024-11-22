#include <stdio.h>

int main(){
 
int number, sum, reverse, thousand, hundred, ten, unit;
printf("nhap so");
scanf("%d", &number);
thousand= number/1000;
hundred= (number/100)%10;
ten= (number/10)%10;
unit= number%10;
reverse= unit*1000+ ten*100+ hundred*10+ thousand;
printf("so dao nguoc là %d\n", reverse);
return 0;
}
