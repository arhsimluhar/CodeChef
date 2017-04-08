def D (d,L):
    
    sum1=0
    i=0
    while(i<d):
        if(i==0):
            sum1=L[0]
        else:
            sum1=sum1+sum1*c
        if(sum1>=l):
            print("ALIVE AND KICKING")
            return None
        i+=1
    print("DEAD AND ROTTING")
    return None
t=int(raw_input(''))
for a in range(t):
    l,d,s,c=raw_input().split(' ')
    l=int(l)
    d=int(d)
    s=int(s)
    c=int(c)
    L=[s,c,l]
    D(d,L)
 