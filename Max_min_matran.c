/*Tìm phần tử max, min của ma trận*/
#include<stdio.h>
#include<conio.h>
float a[50][50];
int i,j,m,n,dk,imax,jmax,imin,jmin;
float min,max;
int main()
{
    /*Nhập mảng*/
    printf("Nhap kich thuoc cua mang (so hang - so cot,<50): "); 
    scanf("%d%d",&m,&n);
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%f",&a[i][j]);
            if ((i==0)&&(j==0))
            {
                min=a[0][0]; max=a[0][0];
                imax=0; jmax=0; imin=0; jmin=0;
            }
            else
            {
                if ((a[i][j]<min))
                {
                    min=a[i][j];
                    imin=i,jmin=j;
                }
                if (a[i][j]>max)
                {
                    max=a[i][j];
                    imax=i,jmax=j;
                }
            }
        }
    }
    printf("Phan tu max cua mang la a(%d,%d) = %0.3f",imax,jmax,a[imax][jmax]);
    printf("\n Phan tu min cua mang la a(%d,%d) = %0.3f",imin,jmin,a[imin][jmin]);
    getch();
}