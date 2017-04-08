#include<stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
 
inline bool islucky(int n)
{
    while(n) {
        if(n % 10 == 3 || n % 10 == 5||n%10==6)
            return true;
        n /= 10;
    }
    return false;
}
 
 
int main()
{   int nc, n, nol,temp;
    cin >> nc;
    temp=nc;
    int a[nc];
    while(nc--)
        {
        nol = 0;
        cin >> n;
        int lim = sqrt(n);
        for(int i = 1; i <= lim; i++) {
            if(n % i == 0) {
                if(islucky(i)) nol++;
                if(islucky(n/i)) nol++;
            }
        }
        a[nc]=nol;
    }
for(n=temp-1;n>=0;--n)
cout<<a[n]<<endl;
return 0;
}
 