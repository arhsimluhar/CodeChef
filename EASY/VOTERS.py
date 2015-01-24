import sys
n1,n2,n3=map(int,sys.stdin.readline().split(" "))
a={}
b=[]
i=n1+n2+n3
j=0
count=0
while(j<i):
    n=int(raw_input())
    try:
        a[n]
    except:
        a[n]=1
    else:
        a[n]=a[n]+1
    j+=1
for i in a:
    if(a[i]>=2):
        b.append(i)
print len(b)
b=sorted(b)
for i in b:
	print i
    