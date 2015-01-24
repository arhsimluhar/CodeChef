#include<stdio.h>
#include<stdlib.h>
 
int main(void) {
    int max,curr,w,num,n,i,p1,p2,a1,a2;
    char ch;
    scanf("%d\n",&n);
    max = 0;
    p1 = p2 = a1 = a2 = 0;
    for(i=1;i<=n;i++) {
        num = 0;
        ch = getchar();
        do { num = num*10 + ch -'0'; ch = getchar(); }while(ch!=' ');
        a1 = num;
        num = 0;
        ch = getchar();
        do { num = num*10 + ch -'0'; ch = getchar(); }while(ch!='\n');
        a2 = num;
        p1 += a1;
        p2 += a2;
        if(p1>p2) {
            curr = p1-p2;
            if(curr>max) {
                max = curr;
                w = 1;
            }
        }
        else {
            curr = p2-p1;
            if(curr>max) {
                max = curr;
                w = 2;
            }
        }
    }
    printf("%d %d",w,max);
    return 0;
}