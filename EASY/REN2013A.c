#include<math.h>
#include<stdio.h>
int main()
{
int a,b;
int t,i;
int m1=0,j;
int s1=0 ,s2=0,temp=0;
scanf("%d",&t);
for(i=0;i<t;i++)
{   s1=0;
    s2=0;
    m1=0;
    scanf("%d %d",&a,&b);
    temp=a;
    while(temp)
    { if(m1<temp%10)
        m1=temp%10;
      temp/=10;
 
    }
    ++m1;
    temp=a;
    j=0;
    while(temp)
    {
        s1+=(temp%10)*pow(m1,j);
        temp=temp/10;
        ++j;
    }
    temp=b;
    m1=0;
    while(temp)
    { if(m1<temp%10)
        m1=temp%10;
      temp/=10;
 
    }
    ++m1;
      temp=b;
    j=0;
    while(temp)
    {
        s2+=(temp%10)*pow(m1,j);
        temp=temp/10;
        ++j;
    }
printf("%d \n",s1+s2);
}
return 0;
}