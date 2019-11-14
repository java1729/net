#include<stdio.h>
int main()
{
int a[10],b[10],n,i,j,count=0;
printf("enter the size of array a");
scanf("%d",&n);
printf("enter the elements of array a");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
if(a[i]==1)
{
b[j]=a[i];
count++;
j++;
if(count==5)
{
b[j]=0;
count=0;
j++;
}
}
}
for(j=0;i<j;j++)
{
printf("%d",b[j]);
}
}
