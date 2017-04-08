#include<string.h>
#include<stdio.h>
int main()
{
short a,i,len,j,c;
char a1[100];
scanf("%u",&a);
for(i=0;i<a;i++)
{
c=0;
scanf("%s",&a1);
len=strlen(a1);
for(j=0;j<len;j++)
{
if(a1[j]=='A'||a1[j]=='D'||a1[j]=='O'||a1[j]=='P'||a1[j]=='R'||a1[j]=='Q')
c++;
else if(a1[j]=='B')
c+=2;
}
printf("%u\n",c);
}
return 0;
}  