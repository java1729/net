#include<stdio.h>
#include<string.h>
void main()
{
int dsize,ksize,i,j;
char data[30],key[10],key1[10],temp[30],rem[10],quot[20];
printf("Enter the data:");
scanf("%s",data);
printf("Enter the key:");
scanf("%s",key);
dsize=strlen(data);
ksize=strlen(key);
strcpy(key1,key);
for (i=0;i<ksize-1;i++) 
{
data[dsize+i]='0';
}
for (i=0;i<ksize;i++)
temp[i]=data[i];
for (i=0;i<dsize;i++) 
{
quot[i]=temp[0];
if(quot[i]=='0')
   for (j=0;j<ksize;j++)
      key[j]='0'; 
else
   for (j=0;j<ksize;j++)
      key[j]=key1[j];
for (j=ksize-1;j>0;j--) 
{
   if(temp[j]==key[j])
     rem[j-1]='0'; 
   else
     rem[j-1]='1';
}
rem[ksize-1]=data[i+ksize];
strcpy(temp,rem);
}
strcpy(rem,temp);
printf("\nQuotient is ");
for (i=0;i<dsize;i++)
printf("%c",quot[i]);
printf("\nRemainder is ");
for (i=0;i<ksize-1;i++)
printf("%c",rem[i]);
printf("\nFinal data is: ");
for (i=0;i<dsize;i++)
printf("%c",data[i]);
for (i=0;i<ksize-1;i++)
printf("%c",rem[i]);
}
