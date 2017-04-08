#include<stdio.h>
void shellsort(long int a[],int z)
{
int j,i,k,m,mid;
for(m = z/2;m>0;m/=2)
{
for(j = m;j< z;j++)
{
for(i=j-m;i>=0;i-=m)
{
if(a[i+m]>=a[i])
break;
else
{
mid = a[i];
a[i] = a[i+m];
a[i+m] = mid;
}
}
}
}
}
 
int main()
{
int low,high,mid;
int long r;
int n,a,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
 {
 scanf("%d",&a);
 long int b[a];
  for(j=0;j<a;j++)
   {
   scanf("%d",&b[j]);
 
   }
   scanf("%d",&r);
   int s=b[r-1];
   shellsort(b,a);
   high=a-1;
   low=0;
   mid=(low+high)/2;
    while(low<=high)
      {
        if(b[mid]==s)
            {
            printf("%d \n",mid+1);
            break;
            }
        if(b[mid]>s)
            high=mid-1;
        if(b[mid]<s)
            low=mid+1;
        mid=(high+low)/2;
      }
 
      }
return 0;
}