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
#define MOD 1000000009
int main()
{
      #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
 
    int t,n,m;
    t=read<int>();
    char ch;
    int in;
    for(int i=0;i<t;i++)
    {
        n=read<int>();
        m=read<int>();
        char a[n+1];
        memset(a,48,n+1);
        for(int j=1;j<=m;j++)
        {
           scanf(" %c",&ch);
           in=read<int>();
           a[in]=ch;
 
        }
 
        int count=0,b=0,c=0;
        long long int ans=1;
        for(int j=1;j<=n;j++)
        {
            if(a[j]!='0')
            {
                if(count==0)
                {
                    b=j;
                    ++count;
        //            cout<<"case 1"<<" "<<j<<endl;
         //           cout<<"ans="<<ans<<endl;
                }
                else if(count==m)
                {
           //         cout<<"case 2"<<" "<<j<<endl;
                    j=n;
             //       cout<<"ans="<<ans<<endl;
 
 
                }
                else
                {
                     if(a[b]!=a[j])
                    {
               //         cout<<"case 3"<<" "<<j<<endl;
                        ++count;
                 //       cout<<"count="<<count<<" "<<"j="<<j<<endl;
                        c=j;
                   //     cout<<"c="<<c<<" "<<"b="<<b<<endl;
                        ans=((c-b)*ans)%MOD;
                     //   cout<<"ans="<<ans<<endl;
                        b=c;
                    }
                    else
                    {
                       // cout<<"case 4"<<" "<<j<<endl;
                        b=j;
                        ++count;
                      //  cout<<"ans="<<ans<<endl;
                    }
 
 
                }
            }
 
        }
        write<long long int>(ans);
    }
    return 0;
}