#include<stdio.h>
#include<math.h>
static int a[1000001];
int main()
{
int n,k,temp,st;
register int i=1,j,index=1;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++,index++)
    {   st=index<(n-index+1)?index:(n-index+1);
        scanf("%d",&temp);
        if(a[temp]==0)
        {
            a[temp]=st;
        }
        else
        {
            a[temp]=(a[temp]<st)?a[temp]:st;
        }
 
    }
//for(int i=1;i<=n;i++)
//    printf("i=%d a[%d]=%d \n",i,i,a[i]);
i=1,j=k-1;
int small=-1;
while(i<j)
    {
     if(a[i]==0)
     {
         ++i;
         continue;
     }
     if(a[j]==0)
     {
         --j;
         continue;
     }
     if(i+j==k)
     {  temp=a[i]<a[j]?a[j]:a[i];
  //      printf("temp= %d\n",temp);
        if(small==-1)
            small=temp;
        else if(small>temp)
            small=temp;
 
    //    printf("i=%ld j=%ld\n",i,j);
      //  printf("small= %ld\n",small);
     --j;
 
     }
     else if(i+j<k)
     {
         ++i;
     }
     else if(i+j>k)
     {
         --j;
     }
    }
printf("%d",small);
return 0;
}
 