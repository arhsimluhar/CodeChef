#include<iostream>
using namespace std;
int main()
{
int n,a;
int count=0;
int max=0;
cin>>n;
for(int i=0;i<n;i++)
    {
    cin>>a;
    if(a)
        ++count;
    else
        {
        if(max<count)
            max=count;
        count=0;
        }
 
    }
    if(max)
    cout<<max<<endl;
    else
    cout<<count<<endl;
 
return 0;
}