import sys
def gcd(x,y):
    if(y==0):
        return x
    else:
        return gcd(y,x%y)
factor,numerator=0,0
t=int(raw_input())
i=0
while(i<t):
    n,m=map(int,sys.stdin.readline().split(' '))
    tot=n*m
    if(n%2):
        o1=n/2+1
        e1=n-o1
    else:
        o1=n/2
        e1=n-o1
    if(m%2):
        o2=m/2+1
        e2=m-o2
    else:
        o2=m/2
        e2=m-o2
    numerator=(o1*e2)+(e1*o2)
    #print numerator
    factor=gcd(numerator,tot)
    numerator/=factor
    tot/=factor
    print str(numerator)+"/"+str(tot)
    i+=1
 