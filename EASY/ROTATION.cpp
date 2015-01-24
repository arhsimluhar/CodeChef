#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif
//Shorthands
#define MOD 1000000007
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
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    int n,m,k=0,x=1;
n=read<int>();
m=read<int>();
long int A[n+1],temp,i,d;
char ch;
FOR(i,1,n,1)
A[i]=read<long int>();
FOR(k,1,m,1)
    {
    SCC(ch);
    d=read<long int>();
     switch(ch)
     {
        case 'C':
            if(x>d)
                x=x-d;
            else if(x<d)
                x=n-(d-(x-1))+1;
            else
                x=n;
            break;
        case 'A':
            if((x+d)%n)
                x=(x+d)%n;
            else
                x=n;
            break;
        case 'R':
            if(x==d)
                write<long int>(A[1]);
            else if(x<d)
                write<long int>(A[d-x+1]);
            else
                write<long int>(A[n-(x-d)+1]);
            break;
        default:
            continue;
 }
}
    return 0;
}