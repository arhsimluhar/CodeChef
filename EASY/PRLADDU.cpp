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
	long long int t,n,d[100000],i,k,j,ans;
	t=read<long long int>();
	while(t--)
	{
		n=read<long long int>();
		i=0;
		while(i<n)
		{
			d[i]=read<long long int>();
			i++;
		}
		i=0;
		k=0;
		ans=0;
		while(i<n)
		{
			j=k;
			if(d[i]<0)
			{
				while(j<n)
				{
					if(i!=j&&d[j]>0)
					{
						if(i-j>0)
						{
							if(d[j]>-d[i])
							{
								ans+=(i-j)*(-d[i]);
								d[j]+=d[i];
								d[i]=0;
								j=n;
								break;
							}
							else
							{
								ans+=(i-j)*(d[j]);
								k=j+1;
								d[i]+=d[j];
								d[j]=0;
							}
						}
						else
						{
							if(d[j]>=-d[i])
							{
								ans+=(j-i)*(-d[i]);
								d[j]+=d[i];
								if(d[j]==d[i])
								k=j+1;
								d[i]=0;
								j=n;
								break;
							}
							else
							{
								ans+=(j-i)*(d[j]);
								k=j+1;
								d[i]+=d[j];
								d[j]=0;
							}
						}
					}
					j++;
				}
			}
			i++;
		}
		write<long long int>(ans);
	}
	return 0;
}