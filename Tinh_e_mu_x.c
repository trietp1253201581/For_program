/*Tính e^x bằng khai triển Taylor*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float x,D,S,D0,x0,S0;
int i;
int main()
{
    printf("Nhap gia tri x = "); scanf("%f",&x);
    printf("Nhap sai so D0 = "); scanf("%f",&D0);
    x0=x;
    S=1; i=2; D=D0+1;
    while (D>D0)
    {
        S0=S;
        S+=x;
        D=S-S0;
        x=x*x0/i;
        ++i;
    }
    printf("Gia tri cua e^%0.6f voi sai so D0 = %0.6f: %0.6f",x0,D0,S);
    getch();
}