#include <bits/stdc++.h>
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
int main()
{
    int n,m,t;
    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
 
    t=read<int>();
    FOR(i,0,t-1,1)
        {
           n=read<int>();
           m=read<int>();
           int a[m];
           int b[402][402];
           FOR(x,0,401,1)
           FOR(y,0,401,1)
            b[x][y]=0;
           int times[402]={0};
           int page[n];
           int occ[402]={0};
           int k=0,maxindex,count=0,element,pos;
           bool present[402]={0};
           FOR(j,0,m-1,1)
           {
                a[j]=read<int>();
                b[a[j]][occ[a[j]]]=j+1;
                occ[a[j]]+=1;
           }
           /*FOR(x,0,4,1)
           {
           FOR(y,0,4,1)
           {
           cout<<b[x][y]<<" ";
           }
           cout<<endl;
           }
           */
           /*FOR(x,0,401,1)
                cout<<occ[x]<<" ";
           */
           FOR(j,0,m-1,1)
           {
 
               if(present[a[j]])
                {
                    times[a[j]]+=1;
                }
               else if(k<n)
               {
                page[k]=a[j];
                present[a[j]]=1;
                times[a[j]]+=1;
                ++k;
                ++count;
               }
               else
               {
                   maxindex=-1;
                   FOR(s,0,n-1,1)
                   {
 
                       int x=b[page[s]][times[page[s]]];
                       if(x==0)
                       {
                           maxindex=x;
                           element=page[s];
                           pos=s;
                           break;
                       }
                       else if(maxindex<=x)
                       {
                           maxindex=x;
                           element=page[s];
                           pos=s;
 
                       }
 
                   }
                   //cout<<page[pos]<<" ";
                   present[page[pos]]=0;
                   page[pos]=a[j];
                   present[a[j]]=1;
                   ++count;
                   times[a[j]]+=1;
 
 
               }
 
           }
           //FOR(x,0,401,1)
             //   cout<<times[x]<<" ";
 
 
           /*FOR(s,0,n-1,1)
           cout<<page[s]<<" ";
           cout<<endl;
           */
           printf("%d\n",count);
 
        }
    return 0;
}
 