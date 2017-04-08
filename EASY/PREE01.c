#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 100003
#define ll double
struct point{
ll x;
ll y;
int index;
};
struct point p[max],hull[max];
 
int compare(void const *a,void const *b){
 
    struct point *p=(struct point *)a;
    struct point *q=(struct point *)b;
    if(p->x!=q->x)
    return (p->x>q->x);
    else return (p->y>q->y);
 
}
 
ll distance(struct point a,struct point b){
 
return((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
 
}
 
int isCCW(struct point a,struct point b,struct point c){
 
    return(((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x))>0);
}
 
 
void convexHULL(int n){
    int i=0,j=0,k=0;
 
    for(i=0;i<n;i++){
    while(k>1&&!(isCCW(hull[k-2],hull[k-1],p[i])))
        k--;
 
     hull[k++]=p[i];
 
    }
 
    for(i=n-2,j=k+1;i>=0;i--){
    while(k>=j && !(isCCW(hull[k-2],hull[k-1],p[i])))
        k--;
    hull[k++]=p[i];
 
    }
 
ll s=0.0;
for(i=1;i<k;i++)
s+=sqrt(distance(hull[i],hull[i-1]));
printf("%.2lf\n",s);
 
    /*for(i=0;i<k;i++)
        printf("%d ",hull[i].index);
        printf("\n");*/
}
int main()
{
 
    int n,i,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%lf%lf",&p[i].x,&p[i].y);
            p[i].index=i;
        }
    qsort(p,n,sizeof(struct point),compare);
    convexHULL(n);
    }
 
    return 0;
} 