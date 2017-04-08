#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define gc getchar_unlocked
 
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
using namespace std;
 
struct man
{
    int room;
    int in;
    int out;
};
 
int compare(const void *x,const void *y){
 
	man *a=(man *)x,*b=(man *)y;
 
	if((*a).room<(*b).room)
		return -1;
	if((*a).room==(*b).room)
		return (*a).out-(*b).out;
 
	return 1;
}
 
 
 
long max_atten(struct man n[],int x)
{
    long i,count=1;
    long endTime=n[0].out;
		 for(i = 1; i <x; ++i) {
            if(n[i].room != n[i - 1].room || endTime <= n[i].in) {
                ++ count;
                endTime = n[i].out;
            }
        }
return count;
}
int main()
{
int t;
//freopen("input.txt","r",stdin);
scanint(t);
int n;
int k;
while(t--)
{   scanint(n);
    scanint(k);
    //struct man *m =(struct man*)calloc(n,sizeof(man));
    struct man m[n];
    int i=0;
    if(n)
    {
            while(i<n)
        {
 
            scanint(m[i].in);
            scanint(m[i].out);
            scanint(m[i].room);
            i++;
        }
 
        qsort(m,n,sizeof(struct man),compare);
        long res=max_atten(m,n);
        printf("%ld\n",res);
    }
    else
        printf("%d\n",0);
    /*
    while(i<n)
    {
        cout<<m[i].room<<" "<<m[i].in<<" "<<m[i].out;
        cout<<endl;
        ++i;
    }
    */
//free(m);
}
 
    return 0;
}
 