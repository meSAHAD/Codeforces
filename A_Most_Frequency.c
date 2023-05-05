#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int size = strlen(s);
    int f[10]={0},i,pos,max;

    for(i=0;i<size;i++)
    {
        f[s[i]-48]++;
    }
    max=0;
    for(i=9;i>=0;i--)
    {
      if(f[i]>=max)
      {
        max = f[i];
        pos = i;
      }
    }

    printf("%d\n",pos);
    return 0;
}
