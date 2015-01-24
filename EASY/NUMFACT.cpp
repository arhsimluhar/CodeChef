#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
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
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<=k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) for (int i=0 ; i<=j ; i+=1)
#define RREP(i, j)for (int i=j ; i>=0 ; i-=1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (typeof(l.begin()) it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
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
inline void readStr(char *str)
{
    register char c=0;
    register int i = 0;
    while (c < 33)
        c = gc();
    while (c > 65)
    {
        str[i] = c;
        c = gc();
        i = i + 1;
    }
 
    str[i] = '\0';
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
        putchar(buf[i]);
    } while (buf[i++] != '\n');
}
#define MAX 1000000
bool isprime[MAX]={0};
long int prime[1000000];
long int *primegen()
{   int n=0;
    for(int i=1;i<MAX;i++)
    {
        if(isprime[i]==0)
        {
            prime[n++]=i+1;
        for(int j=i+1;j<MAX;j+=(i+1))
                isprime[j-1]=1; //-1 because index starts at 0
        }
 
    }
return prime;
}
int primecount[1000001];
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
 
    long long int f=1;
    int n,t,c=0;
    unsigned long long int ans,d,count=0;
    long int *prime=primegen(); //returning the list of primes
    t=read<long int>();
    FOR(j,0,t-1,1)
    {
    n=read<long int>();
    FOR(i,0,1000000,1)
    primecount[i]=0;
    FOR(k,0,n-1,1)
    {
    ans=read<long int>();
    FOR(i,0,MAX,1)
            {
                if(prime[i]*prime[i]>ans)
                    break;
                else
                {
                    c=1;
                    while(ans%prime[i]==0)
                    {
                            ans=ans/prime[i];
                            primecount[prime[i]]+=1;
                    }
 
                }
 
            }
            if(ans>1)
               primecount[ans]+=1;
    }
    ans=1;
    FOR(k,0,1000000,1)
        {   //cout<<primecount[k]<<" ";
            if(primecount[k])
                ans=ans*(primecount[k]+1);
        }
    write<unsigned long long int>(ans);
    }
    return 0;
}
 