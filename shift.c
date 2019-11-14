#include<stdio.h>
int main()
{
int a[20],b[20],n,i,j,k,count;
printf("enter the size of array a");
scanf("%d",&n);
printf("enter the elements of array a");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
i=0;
j=0;
while(i<n)
{
if(a[i]==1)
{
b[j]=a[i];
count=1;
for(k=i+1;a[k]==1&&k<n&&count<5;k++)
{
j++;
b[j]=a[k];
count++;
if(count==5)
{
j++;
b[j]=0;
}
i=k;
}
}
else
{
b[j]=a[i];
}
i++;
j++;
}
printf("array after stuffing");
for(i=0;i<j;i++)
{
printf("%d",b[i]);
}
}
