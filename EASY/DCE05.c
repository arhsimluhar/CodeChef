#include<stdio.h>
inline int log1(long t)
{
long a=1;
int n=0;
while(a<=t)
{
++n;
a=a<<1;
 
}
return n-1;
}
long inline pow2(int a)
{
long b=1;
while(a)
{
    b=b<<1;
    --a;
}
return b;
}
int main()
{
int n=0,i;
long t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%ld",&t);
long ans=pow2(log1(t));
printf("%ld\n",ans);
}
return 0;
}
 