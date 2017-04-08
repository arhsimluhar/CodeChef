#include<stdio.h>
main()
{
    int t,n,i,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char arr[n];
        a=0;
        b=0;
        c=0;
        scanf("%s",arr);
        for(i=0;i<n;i++)
        {
            if(arr[i]=='Y')
                ++a;
            if(arr[i]=='N')
                ++b;
            if(arr[i]=='I')
                ++c;
        }
       // printf("%d %d %d \n",a,b,c);
        if(c==0)
        {
        	if(a==0)
        	   printf("NOT SURE\n");
        	else
        	printf("NOT INDIAN\n");
        }
        else
           printf("INDIAN\n");
 
    }
    return 0;
}