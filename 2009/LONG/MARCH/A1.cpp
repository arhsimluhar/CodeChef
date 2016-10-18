/*

Author : rahul_mishra01 (rahul.mishra2003@gmail.com)
Concept : Subset Sum
problem Name : Paying Up



*/



#include<bits/stdc++.h>
#define INF  INT_MAX  //infinity
#define NINF  INT_MIN //Negetive_infinity
#define MEM(a, b) memset(a, (b), sizeof(a))//memory initialisation
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define PA(a,L,R) FOR(i,L,R,1) cout << a[i] << (i==R?'\n':' ')
#define P2A(a,N,M)FOR(i,0,N-1,1) FOR(j,0,M-1,1) cout << a[i][j] << ((j==M-1)?'\n':' ')
#define all(c) c.begin(), c.end()
#define PV(a) PA(a,0,a.size()-1)
#define gcd  __gcd
#ifndef ONLINE_JUDGE
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif
#define FOR(i, j, k, in) for (int i=j ; i<=k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define mp make_pair
#define pb push_back
using namespace std;
typedef long int ld;
typedef unsigned long int uld;
typedef long long int lld;
typedef unsigned long long int  ulld;
typedef pair<lld,lld> PII;
typedef vector<lld> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

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

bool possibility(long int m,int n,long int *notes)
{
   FOR(i,1,(1<<n)-1,1)
   {
      long int total = 0;
      long int temp = i;
      int index = 1;
      while(temp > 0)
      {

          if(temp&1)
            total+=notes[index];
          temp=temp>>1;
          index+=1;


      }

      if (total == m)
      {
        //DBG(i)
    //  DBG(total)
        return true;
      }
   }

   return false;


}

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
      //  freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;

    FOR(i,0,t-1,1)
    {
     long int n,m;
     cin>>n>>m;

     long int notes[n+1];
     notes[0]=0;
     FOR(j,1,n,1)
     cin>>notes[j];

     bool ans = possibility(m,n,notes);
     if(ans)
     cout<<"Yes\n";
     else
     cout<<"No\n";

    }
    return 0;

}
