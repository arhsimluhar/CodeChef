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
struct node
{
    int n;
    long int dist;
};
 
int comp(const void *p1,const void *p2)
    {
        struct node e1=*((struct node*)p1);
        struct node e2=*((struct node*)p2);
        if(e1.dist<e2.dist)
            return -1;
        else if(e1.dist>e2.dist)
            return 1;
        return 0;
    }
 
int main()
{
 
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    int n,p,e,r;
    long int k,x,y;
    n=read<int>();
    int a[n+1];
    struct node element[n];
    k=read<long int>();
    p=read<int>();
    FOR(i,0,n-1,1)
        {
            element[i].n=i+1;
            element[i].dist=read<long int>();
 
        }
    qsort(element,n,sizeof(struct node),comp);
   /* FOR(i,0,n-1,1)
        {
            cout<<element[i].dist<<" "<<element[i].n<<endl;
       }
    */
 
    a[0]=0;
    a[element[0].n]=element[0].n;
     FOR(i,1,n-1,1)
            {
                if(element[i].dist-element[i-1].dist<=k)
                    a[element[i].n]=a[element[i-1].n];
                else
                    a[element[i].n]=element[i].n;
 
            }
    /*FOR(i,0,n,1)
        cout<<a[i]<<" ";
        cout<<endl;
    */
    FOR(i,0,p-1,1)
        {
            e=read<int>();
            r=read<int>();
            if(a[e]==a[r])
                printf("Yes\n");
            else
                printf("No\n");
        }
    return 0;
}