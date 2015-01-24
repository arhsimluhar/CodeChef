
#include<stdio.h>
 
int main()
{
	int N,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		if(N%2)
			puts("BOB");
		else
			puts("ALICE");
	}
	return 0;
}
 