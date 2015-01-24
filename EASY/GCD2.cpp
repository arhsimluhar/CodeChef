#include<bits/stdc++.h>
using namespace std;
int rem (char *b ,int a)
{
    int sum=0;
    int i=0;
 while(b[i]!='\0')
 {
     sum=((sum<<1)+(sum<<3)+(b[i]-'0'))%a;
     ++i;
 }
 return sum;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int t;
    scanf("%d",&t);
    for(int i=0;i<=t-1;i++)
    {
        char b[300];
        int a;
        scanf("%d %s",&a,b);
        if(a==0)
            printf("%s\n",b);
        else
        {
        int B=rem(b,a);
        printf("%d\n",__gcd(a,B));
        }
    }
    return 0;
}
 