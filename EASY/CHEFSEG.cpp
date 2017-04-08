#include<bits/stdc++.h>
#define INF  INT_MAX  //infinity
#define NINF  INT_MIN //Negetive_infinity
#define MSET(val) memset(val, 0, sizeof(val))//memory initialisation
#define MAX(a,b) (a<b?b:a)
#define ABS(x) (x<0?(-x):x) // big bug here if "-x" is not surrounded by "()"
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define PA(a,L,R) FOR(i,L,R,1) cout << a[i] << (i==R?'\n':' ')
#define P2A(a,N,M)FOR(i,0,N-1,1) FOR(j,0,M-1,1) cout << a[i][j] << ((j==M-1)?'\n':' ')
#define PV(a) PA(a,0,a.size()-1)
#define gcd  __gcd
#ifndef ONLINE_JUDGE
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define FOR(i, j, k, in) for (int i=j ; i<=k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
using namespace std;
// FAST I/O Generic function
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
long long int nextPowerOf2(long long int n)
{
    long long int p = 1;
    if (n && !(n & (n - 1)))
        return n;
 
    while (p < n) {
        p <<= 1;
    }
    return p;
}
template<class T>
unsigned long long int exp2( unsigned long long int base,T exp)
    {   unsigned long long int result=1;
        while(exp>0)
        {
            if(exp&1)
            result=(result*base);
            exp=exp>>1;
            base=(base*base);
        }
    return result;
    }
int main()
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int t=read<int>();
    long double x,y,z,yt;
    long long int n,k=0;
    FOR(i,0,t-1,1)
    {
        cin>>x;
        k=read<long long int>();
        n=nextPowerOf2(k);
        if(n==k)
            n=n<<1;
        unsigned long long int z=log2(n);
       // DBG(z);
        long double num=(2*(k-exp2(2,z-1))+1);
        x=num*(x/exp2(2,z));
 
        cout<<setprecision(18)<<x<<endl;
    }
       return 0;
}
 