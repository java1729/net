#include<stdio.h>
#include<string.h>
int main()
{
char a[20],b[20];
char flag,escape;
printf("enter message: ");
scanf("%s",&a);
printf("enter flag value\n");
scanf(" %c",&flag);
printf("enetr escape value\n");
scanf(" %c",&escape);
//printf("%c %c\n",flag,escape);
int i=0,j=0;
b[j]=flag;
//printf("%c",b[j]);
while(a[i]!='\0')
{
j++;
if((a[i]==flag) || (a[i]==escape))
{
b[j]=escape;
j++;
b[j]=a[i];
}
else
{
b[j]=a[i];
}
i++;
}
b[j+1]=flag;
int n=strlen(b);
printf("%d",n);
printf("%s",b);
}
