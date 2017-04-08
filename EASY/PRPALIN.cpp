#include<iostream>
#include<math.h>
 
using namespace std;
int main()
{
    int n,num,rev=0,digit,m,i,j,flag=10,c=0;
    cin>>n;
    while(flag)
    {  num=n;
       rev=0;
         do
                {
                digit=num%10;
                rev=(rev*10)+digit;
                num=num/10;
                }while(num);
                //cout<<"N="<<n<<" ";
                //cout<<"Rev="<<rev;
                if(rev==n)
                {
                    for(j=2;j<=sqrt(n);j++)
                    {
                        if(n%j==0)
                            {
                             n+=1;
                             c=0;
                             break;
                            }
                        else
                        {
                            c=1;
                        }
                    }
 
                }
            if(c==1)
                    {
                        cout<<n;
                        break;
                    }
            ++n;
 
 
    }
    return 0;
}