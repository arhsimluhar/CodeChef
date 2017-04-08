#include <bits/stdc++.h>
using namespace std;
char ch[4] = {'A', 'C', 'G', 'T'};
int main()
{
	int t, n, m, k, i, j;
	long long r;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				r = rand()%100;
				r *= 16;
				r %= 16;
				r *= 4;
				r %= 10;
				r %= 4;
				cout<<ch[r];
			}
			cout<<endl;
		}
	}
	return 0;	
} 