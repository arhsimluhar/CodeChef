#include<stdio.h>
inline int root(int k)
{
return k/2;
}
int main()
{
long i,j,n,max,x,y,k;
scanf("%d",&n);
for(k=0;k<n;k++)
{
x=0,y=0;
scanf("%ld %ld",&i,&j);
while(i!=j)
{
if(i>j)
{
i=root(i);
++x;
}
else
{
j=root(j);
++y;
}
}
printf("%d\n",x+y);
}
return 0;
 
}
 