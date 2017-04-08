#include<stdio.h>
int main()
{
int no,noc,cw[30],pc[30],r[30],i,j,a,b,temp;
scanf("%d",&no);
for(a=0;a<no;a++)
{
scanf("%d",&noc);
for(j=0;j<noc;j++)
scanf("%d",&cw[j]);
for(j=0;j<noc;j++)
scanf("%d",&pc[j]);
for(i=0;i<noc;i++)
{
for(j=0;j<(noc-i-1);j++)
{
if(cw[j]>cw[j+1])
{
temp=cw[j+1]; //swapping variables without temp
cw[j+1]=cw[j];
cw[j]=temp;
}
if(pc[j]>pc[j+1])
{
temp=pc[j+1]; //swapping variables without temp
pc[j+1]=pc[j];
pc[j]=temp;
}
}
}
 
b=0;
for(j=0,i=0;j<noc;)
    {
if(cw[i]<=pc[j])
    {
    ++b;
    ++i;
    ++j;
    }
    else
    ++j;
    }
r[a]=b;
}
for(i=0;i<no;i++)
printf("%d \n",r[i]);
return 0;
} 