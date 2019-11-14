#include<stdio.h>
int gcd(int a,int b)
{
  if(a==0)
    return b;
  if(b==0)
    return a;
  if(a==b)
    return a;
  if(a>b)
    return gcd(a-b,b);
  if(b>a)
    return gcd(a,b-a);
}



int finde(int e,int pn)
{
  while(1)
  {
    if(e<pn && gcd(e,pn)==1)
    {
      return e;
    }
    e++;
  }

}



int findd(int e,int pn,int n)
{
  int k;

  for(k=0;k<n;k++)
  {
    int ans=(1+(k)*pn);
    if((ans%e)==0)
    {
      return k;
    }
  }
}



int power(int x,int y)
{
  int ans=1;
  for(int i=1;i<=y;i++)
  {
    ans=ans*x;
  }
  return ans;
}




int main(){
  int p,q,n,e=2,m;
  printf("enter two prime numbers: \n");
  scanf("%d %d",&p,&q);
  n=p*q;
  printf("n = %d \n",n);
  int pn=(p-1)*(q-1);
  e=finde(e,pn);
  printf("public key: %d\n",e);
  int k=findd(e,pn,n);
  printf("k is:%d\n",k);
  int d=(1+(k*pn))/e;
  printf("private key: %d\n",d);
  printf("enter message to encrypt:\n");
  scanf("%d",&m);
  int c=(power(m,e)%n);
  printf("cypher text is: %d ",c);
 // m=(power(c,d)%n);
 // printf("the message after decryption is :%d",m);
//}
  int mes=(power(c,d)%n);
  printf("the messge after decryption is %d",mes);

}
