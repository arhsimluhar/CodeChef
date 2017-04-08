#include<bits/stdc++.h>
#define INF  INT_MAX  //infinity
#define NINF  INT_MIN //Negetive_infinity
#define MEM(a, b) memset(a, (b), sizeof(a))//memory initialisation
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define PA(a,L,R) FOR(i,L,R,1) cout << a[i] << (i==R?'\n':' ')
#define P2A(a,N,M)FOR(i,0,N-1,1) FOR(j,0,M-1,1) cout << a[i][j] << ((j==M-1)?'\n':' ')
#define PV(a) PA(a,0,a.size()-1)
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
template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > bool inside(T a, T b, T c) { return a<=b && b<=c; }
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
      //  freopen("output.txt","w",stdout);
    #endif
    int t=read<int>();
    int x,y,l,u,c;
    FOR(i,0,t-1,1)
    {
        vector<pair<int,int> > kingdom;
        int n=read<int>();
        FOR(j,0,n-1,1)
        {
            x=read<int>();
            y=read<int>();
 
            kingdom.push_back(make_pair(x,y));
 
        }
        sort(kingdom.begin(),kingdom.end());
        l=kingdom[0].first;
        u=kingdom[0].second;
        c=1;
        FOR(j,1,n-1,1)
        {
            //DBG(j);
            //cout<<kingdom[j].first<<" "<<kingdom[j].second<<endl;
            if(kingdom[j].first>=l&&kingdom[j].first<=u)
            {
                l=kingdom[j].first;
                if(kingdom[j].second<=u)
                {
                        u=kingdom[j].second;
                }
              //  cout<<l<<" "<<u<<" "<<endl;
            }
            else
            {
                ++c;
                l=kingdom[j].first;
                u=kingdom[j].second;
 
              //   cout<<l<<" "<<u<<" "<<endl;
            }
         //DBG(c);
        }
       write<int>(c);
    }
 
return 0;
}
 