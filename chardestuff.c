#include<stdio.h>
void main()
{
int m,n,i,k;
k=0;
char b[30],a[30];
char flag,esc;
flag='n';
esc='e';
printf("enter length of message");
scanf("%d",&n);
printf("enter the stuffed message");
scanf("%s",&b);
for(k=0;k<n;k++)
{
if(b[k]==flag||b[k]==esc)
{
k++;
a[m]=b[k];
m++;
}
else
{
a[m]=b[k];
m++;
}
}
for(i=0;i<k;i++)
{
printf("%c",a[i]);
}
}
