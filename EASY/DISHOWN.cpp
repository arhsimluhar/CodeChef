#include <iostream>
#include <math.h>
#include <stdio.h>
#ifndef ONLINE_JUDGE
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif
//Shorthands
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define FOR(i, j, k, in) for (register int i=j ; i<=k ; i+=in)
// typedefs
using namespace std;
//Generic fast inputs
template <class T>
inline T read()
{
    T n=0;
    bool sign=0;
    char p=gc();
    if(p=='-')
        sign=1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-')
        p=gc();
    if(p=='-')
        sign=1,p=gc();
    while(p>='0'&&p<='9') {
        n = (n<< 3) + (n<< 1) + (p - '0');
        p=gc();
    }
    if(sign)
        return -n;
    return n;
}
//Generic fast output function
template <class T> inline void write(T x)
{
    int i = 20;
    char buf[21];
    // buf[10] = 0;
    buf[20] = '\n';
 
    do
    {
        buf[--i] = x % 10 + '0';
        x/= 10;
    }while(x);
    do
    {
        pc(buf[i]);
    } while (buf[i++] != '\n');
}
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    int q,n,z,x,y,t;
    t=read<int>();
    FOR(i,0,t-1,1)
        {
            n=read<int>();
            int own[n+1];
            long long int score[n+1];
            score[0]=0ll;
            FOR(j,1,n,1)
                {
                score[j]=read<long long int>();
                own[j]=j;
                }
            q=read<int>();
            FOR(j,0,q-1,1)
                {
                    z=read<int>();
                    if(!z)
                    {
                        x=read<int>();
                        y=read<int>();
                        int temp,temp2;
                        temp=x;
                           while(own[temp]!=temp)
                            {
                                temp=own[own[temp]];
                            }
                            if(temp!=x)
                                own[x]=temp;
                        temp2=y;
                            while(own[temp2]!=temp2)
                            {
                                temp2=own[own[temp2]];
                            }
                            if(temp2!=y)
                                own[y]=temp2;
                        if(temp==temp2)
                            {
                                printf("Invalid query!\n");
                            }
                        else if(score[temp]>score[temp2])
                            {
                                own[temp2]=temp;
                            }
                        else if (score[temp]<score[temp2])
                            {
                                own[temp]=temp2;
                            }
 
                    }
                    else
                    {
                          x=read<int>();
                          while(own[x]!=x)
                            {
                                x=own[own[x]];
                            }
                        write<int>(x);
                       // printf("%d\n",x);
                    }
                }
        }
    return 0;
}