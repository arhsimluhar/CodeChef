
#include<stdio.h>
#include<string.h>
char a[10000],b[10000];
int main()
{
int sum1=0,t,temp,n,m;
scanf("%d",&t);
while(t>0)
{
int c[200]={0};
scanf("%s",a);
scanf("%s",b);
int i=0;
sum1=0;
while(a[i]!='\0')
{
temp=(int)a[i];
//printf("temp=%d",temp);
c[temp]+=1;
++i;
}
//for(i=0;i<200;i++)
//    printf("c[%d]=%d\n",i,c[i]);
i=0;
while(b[i]!='\0')
{
temp=(int)b[i];
if(c[temp]<=0)
  {
  ++i;
  continue;
  }
else
{
c[temp]-=1;
++i;
}
}
i=0;
 
while(i<200)
{
    sum1+=c[i];
    ++i;
}
n=strlen(a);
//printf("sum1=%d\n",sum1);
//printf("len a=%d\n",n);
n=n-sum1;
//for(i=0;i<=122;i++)
//printf("%c=%d\n",i,c[i]);
 
printf("%d\n",n);
--t;
}
return 0;
}
 