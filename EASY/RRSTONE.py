import sys
n,k=map(int,sys.stdin.readline().split(' '))
s=map(int,sys.stdin.readline().split(' '))
m=max(s)
a=[]
if(k==0):
    for a1 in s:
        print a1,
else:
    for i in xrange(n):
        s[i]=m-s[i]
    m=max(s)
    for i in xrange(n):
        a.append(m-s[i])
    if(k%2==1):
        for a1 in s:
            print a1,
    else:
        for a1 in a:
            print a1,
 