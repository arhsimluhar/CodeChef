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
// typedefs
using namespace std;
 
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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
 
    int t;
    t=read<int>();
    int r,g,b,m;
    for(int i=0;i<t;i++)
    {
        r=read<int>();
        g=read<int>();
        b=read<int>();
        m=read<int>();
        long int R[r],G[g],B[b];
        long long int mr=0,mb=0,mg=0;
        long int z[]={mb,mr,mg};
 
        for(int j=0;j<r;j++)
         {
            R[j]=read<long int>();
            if(mr<R[j])
                mr=R[j];
 
         }
         for(int j=0;j<g;j++)
          {
              G[j]=read<long int>();
              if(mg<G[j])
                mg=G[j];
 
          }
         for(int j=0;j<b;j++)
           {
               B[j]=read<long int>();
               if(mb<B[j])
                mb=B[j];
 
           }
         z[0]=mb;
         z[1]=mr;
         z[2]=mg;
 
        for(int j=0;j<m;j++)
        {
         sort(z,z+3);
         z[2]=z[2]>>1;
        }
 
 
        sort(z,z+3);
        write<long int>(z[2]);
 
    }
	return 0;
}