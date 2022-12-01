/*Tìm phần tử âm đầu tiên của ma trận*/
#include<stdio.h>
#include<conio.h>
float a[50][50];
int i,j,m,n,dk;
int imin,jmin;
int main()
{
    /*Nhập mảng*/
    printf("Nhap kich thuoc cua mang (so hang - so cot,<50): "); 
    scanf("%d%d",&m,&n);
    imin=-1;
    jmin=-1;
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%f",&a[i][j]);
            dk=(a[i][j]<0) && (imin<0) && (jmin<0);
            if (dk!=0)
            {
                imin=i;
                jmin=j;
            } 
        }
    }
    if ((imin>=0)&&(jmin>=0))
    printf("\n Phan tu am dau tien cua ma tran la a(%d,%d)",imin,jmin);
    else printf("\n Ma tran ko co phan tu am");
    getch();
}