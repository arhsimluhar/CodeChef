#include<iostream>
#include <stdlib.h>
using namespace std;
 
class charStack {
	private:
        char*Data;
		int MAX_SIZE;
		int top;
	public:
		charStack(){
			top=-1;
			MAX_SIZE = 50;
			Data = new char[MAX_SIZE];
		}
		charStack(int size) {
			top=-1;
			MAX_SIZE=size;
			Data=new char[MAX_SIZE];
		}
		int isfull() {
			if(top==(MAX_SIZE-1)) return 1;
			else return 0;
		}
		int isempty() {
			if(top==-1) return 1;
			else return 0;
		}
		char topData() {
			if(isempty()){
				cerr<<"Error:Stack Underflow"<<endl;
				return -1;
			}
			else return Data[top];
		}
		void push(char elem) {
			if (isfull()){
				cerr<<"Error:Stack is Full"<<endl;
			}
			else{
				Data[++top] = elem;
			}
		}
		char pop() {
			if(isempty()){
				cerr<<"Error:Stack Underflow"<<endl;
				return -1;
			}
			else {
				return Data[top--];
			}
		}
		void display()
		{
		    for(int i=0;i<=top;i++)
                cout<<Data[i]<<" ";
		}
};
inline bool cfchar(char str)
{
    if(int(str)>=97 && int(str)<=122)
        return 1;
    else
        return 0;
}
bool cfoperator(char str)
{
    char checkp[]={'+','-','*','/','^','%','(',')'};
    for(int i=0;i<=7;i++)
        if(checkp[i]==str)
            return 1;
    else
        return 0;
}
 
int main() {
	// your code goes here
    int priority[127]={0};
    priority['(']=0;
    priority['+']=1;
    priority['-']=1;
    priority['*']=2;
    priority['/']=2;
    priority['%']=2;
    priority['^']=3;
    priority[')']=4;
 
    int t;
    cin>>t;
    while(t)
    {
        
    
    charStack s(400);
    char st[410];
    cin>>st;
    int i=0;
    while(st[i]!='\0')
    {
        if(cfchar(st[i]))
            cout<<st[i];
        else
            {   //cout<<"yes";
                if(s.isempty()|| st[i]=='(')
                    s.push(st[i]);
                else if(st[i]==')')
                    {
                        while(s.topData()!='(')
                                {
                                    cout<<s.topData();
                                    s.pop();
                                }
                        s.pop();
                    }
                else if(priority[st[i]]>priority[s.topData()])
                    {
 
                            s.push(st[i]);
                    }
                else
                    {
                     while(priority[st[i]]<priority[s.topData()])
                     {
                         cout<<s.topData();
                         s.pop();
                     }
                    }
 
             }
 
        ++i;
//s.display();
//cout<<endl;
 
    }
    --t;
    cout<<endl;
    }
 
	return 0;
}