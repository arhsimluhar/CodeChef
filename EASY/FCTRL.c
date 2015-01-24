#include<stdio.h>
#include<math.h>
int main()
{
 
long b,check,t,i;
long a;
int n;
scanf("%ld",&a);
for(i=1;i<=a;i++)
{
scanf("%ld",&b);
n=1;
t=0;
do
{
check=floor(b/(pow(5,n)));
t=t+check;
n++;
}while(check);
printf("%ld\n",t);
}
return 0;
}  