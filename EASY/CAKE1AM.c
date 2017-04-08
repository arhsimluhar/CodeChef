#include<math.h>
#include<stdio.h>
int main()
{
int x1,x2,y1,y2,x3,y3,x4,y4,X1,X2,Y1,Y2;
int t,i,j,k;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
scanf("%d %d %d %d",&x3,&y3,&x4,&y4);
X1=fmax(x1,x3);
//printf("X1=%d\n",X1);
Y1=fmax(y1,y3);
//printf("Y1=%d\n",Y1);
X2=fmin(x2,x4);
//printf("X2=%d\n",X2);
Y2=fmin(y2,y4);
//printf("Y2=%d\n",Y1);
if(X1<X2 && Y1<Y2)
k=fabs((X1-X2)*(Y1-Y2));
else
k=0;
j=fabs((x1-x2)*(y1-y2))+fabs((x3-x4)*(y3-y4))-k;
printf("%d\n",j);
}
return 0;
}
 