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
int main()
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
 
    char q[3];
    int c=0;
    long int cb=0,cr=0,a,b,la,lb;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        cb=cr=0;
        scanf("%s",q);
 
        switch(q[1])
        {
        case 'b':
        case 'r':
                a=read<long int>();
                b=read<long int>();
                //scanf("%ld %ld",&a,&b);
                la=floor(log2(a)+1);
                lb=floor(log2(b)+1);
            //if they are already same
            if(a==b)
            {
               if(c==0)
                    {
                        if(la&1)
                            cb=1;
                        else
                            cr=1;
                    }
                    else
                    {
                       if(la&1)
                            cr=1;
                        else
                            cb=1;
                    }
 
            }
 
            //when they have different levels
            while(a!=b)
            {
                if(a>b)
                {
                    if(c==0)
                    {
                        if(la&1)
                            ++cb;
                        else
                            ++cr;
                    }
                    else
                    {
                       if(la&1)
                            ++cr;
                        else
                            ++cb;
                    }
                    --la;
                    a=a/2;
                }
                else
                {
                    if(c==0)
                    {
                        if(lb&1)
                            ++cb;
                        else
                            ++cr;
                    }
                    else
                    {
                       if(lb&1)
                            ++cr;
                        else
                            ++cb;
                    }
                    --lb;
                    b=b/2;
                }
                if(a==b)
                {
                    if(c==0)
                    {
                        if(lb&1)
                            ++cb;
                        else
                            ++cr;
                    }
                    else
                    {
                       if(lb&1)
                            ++cr;
                        else
                            ++cb;
                    }
 
                }
 
            }
            if(q[1]=='r')
            {
                 write<long int>(cr);
                  // printf("%ld\n",cr);
 
            }
            else
            {
                write<long int>(cb);
                // printf("%ld\n",cb);
 
            }
 
         break;
 
        case 'i':
            c=(c^1);
 
         break;
 
       }
           }
       return 0;
}
 