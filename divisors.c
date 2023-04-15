#include<stdio.h>

int main()
{
    int a,j=0,b[101];
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        if (a%i==0) {b[j]=i; j++;}
    } 
    for (int k=0;k<j;k++)
    {
        printf("%d\n",b[k]);
    }
    return 0;
}