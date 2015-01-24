#include<math.h>
#include<stdio.h>
 
int main()
{
    float mina=0,maxa=0;
    float a,b,c,s,k,area;
    signed short int n,r1,r2,d=0;
    scanf("%u",&n);
    int r[3][2];
    register int i=0,j=0;
    while(d<n)
    {
        scanf("%d %d %d %d %d %d",&r[0][0],&r[0][1],&r[1][0],&r[1][1],&r[2][0],&r[2][1]);
        area=(r[0][0]*(r[1][1]-r[2][1])+r[1][0]*(r[2][1]-r[0][1])+r[2][0]*(r[0][1]-r[1][1]))/2;
        if(area<0)
            area=-area;
        if(maxa<=area)
        {
            maxa=area;
            r1=d;
        }
        if(mina>=area||d==0)
        {
            mina=area;
            r2=d;
 
        }
    ++d;
    }
    printf("%d %d",r2+1,r1+1);
    return 0;
}