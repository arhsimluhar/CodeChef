#include<stdio.h>
long int t,n,arr[100001],max1;
long int j,i;
int main()
{
scanf("%ld",&t);
while(t>0)
{
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    max1=arr[n-1];
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        if(max1<=arr[i]+i)
        {  max1=arr[i]+i;
        }
    }
   printf("%ld\n",max1);
--t;
} return 0;
}