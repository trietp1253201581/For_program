/*Chương trình nhập và đảo ngược một dãy số*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float x[100],c;
int i, j, n;
int main()
{
    system("cls");
    /*Nhập các phần tử của dãy số*/
    printf("\n Nhap so phan tu cua day: "); scanf("%d",&n);
    for (i = 0; i < n; ++i)
    {
        printf("\n x[%d] = ",i); scanf("%f",&x[i]);
    }
    /*Đảo ngược dãy số*/
    for (i = 0, j = n-1; i<j; ++i,--j)
    {
        c=x[i];
        x[i]=x[j];
        x[j]=c;
    }
    /*In ra dãy mới*/
    printf("\n Day dao nguoc:");
    for (i = 0; i < n; ++i)
    {
        printf("\n x[%d] = %0.2f",i,x[i]);
    }
    getch();
}