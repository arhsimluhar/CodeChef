#include<iostream>
#include<vector>
using namespace std;
int main()
{
unsigned long long int n,k,x;
int t;
cin>>t;
while(t--)
{
    unsigned long long int profit=0,temp=0;
    vector <unsigned long long int> a,b;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        {
        cin>>x;
        a.push_back(x);
        }
    for(int i=0;i<n;i++)
        {
        cin>>x;
        b.push_back(x);
        }
 
    for(int i=0;i<n;i++)
        {
            temp=k/a[i]*b[i];
            if(profit<temp)
                profit=temp;
 
        }
        cout<<profit<<endl;
 
}
return 0;}