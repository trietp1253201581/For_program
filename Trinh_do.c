/*Nhập và đếm số cán bộ mỗi trình độ*/
#include<stdio.h>
#include<conio.h>
int a[30];
int i, junior=0, senior=0, advanced=0, undergraduate=0, olympiad=0,n;
int main()
{
    /*Nhập vào bảng mã trình độ và đếm*/
    printf("Nhap so can bo (<30): "); scanf("%d",&n);
    for (i = 0; i < n; ++i)
    {
        printf("Ma trinh do can bo %d: ",i); scanf("%d",&a[i]);
        switch (a[i])
        {
        case 1: junior++; break; 
        case 2: senior++; break;
        case 3: advanced++; break;
        case 4: undergraduate++; break;
        case 5: olympiad++; break;
        }
    }
    /*In kết quả*/
    printf("So can bo trinh do: \n junior: %d\n senior: %d\n advanced: %d\n undergraduate: %d\n olympiad: %d",junior,senior,advanced,undergraduate,olympiad);
    getch();
} 