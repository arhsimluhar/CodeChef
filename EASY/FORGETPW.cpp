#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[1000001];
int main()
    {
        int t,n,len,a1,b1,c1,c2,c3;
        char x,y,ch;
 
        cin>>t;
        for(int i=0;i<t;i++)
         {   c1=c2=c3=0;
             int a[127]={0};
             cin>>n;
             for(int j=0;j<n;j++)
             {
                 cin>>x>>y;
                 a[(int)x]=(int)y;
             }
             cin>>s;
       //      cout<<s;
             //cout<<"Reached here";
             len=strlen(s);
             for(int j=0;j<len;j++)
             {   if(a[s[j]]==0)
                {
                 continue;
                }
                else
                {
                 s[j]=(char)a[s[j]];
                }
 
 
             }
 
         //cout<<s;
         a1=0,b1=len-1;
         int b=len-1;
         bool z=0;
         while(b>=0)                 //finding the decimal
            {
                if(s[b]=='.')
                {
                c3=b;
                z=1;
                break;
                }
                --b;
            }
         while(c2==0 ||c1==0)
            {   if(c1==0)
                    {
 
                    if(s[a1]=='0')
                        ++a1;
                    else if(s[a1]=='.')
                        {
                        ++c1;
 
                        }
                    else
                    {
                        ++c1;
                    }
                }
                if(c2==0)
                    {
 
                    if(s[b1]=='0')
                        --b1;
                    else if(s[b1]=='.')
                        {
                        b1--;
                        ++c2;
                        }
                    else
                    {
 
                        ++c2;
                    }
 
                }
 
         }
     //cout<<"a1="<<a1<<" "<<"b1="<<b1<<" "<<"c3="<<c3<<endl;
         if(z==0)
            b1=len-1;
         for(int j=a1;j<=b1;j++)
            cout<<s[j];
        if(b1<a1)
            cout<<0;
         cout<<endl;
 
 
         }
        return 0;
    }