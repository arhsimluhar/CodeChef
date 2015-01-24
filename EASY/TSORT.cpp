#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a;
scanf("%d",&a);
int a1[a];
for(int i=0;i<a;i++)
scanf("%d",&a1[i]);
sort(a1,a1+a);
for(int i=0;i<a;i++)
printf("%d \n",a1[i]);
return 0;
} 