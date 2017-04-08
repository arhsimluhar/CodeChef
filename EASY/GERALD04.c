#include<stdio.h>
int main()
{
float h1,m1,h2,m2,t,i,dis,t1,t2,temp;
float a,b,c;
scanf("%f",&t);
for(i=0;i<t;i++)
{
scanf("%f:%f",&h1,&m1);
scanf("%f:%f",&h2,&m2);
scanf("%f",&dis);
//case 1
temp=(h1-h2)*60+(m1-m2);
t1=dis+temp;
//case 2
if((2*dis)<=temp)
t2=temp;
else
{
b=h2*60+m2;
c=h1*60+m1;
t2=dis+(dis-((b+dis)-c))/2;
}
printf("%.1f %.1f\n",t1,t2);
}
return 0;
}
 