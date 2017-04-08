z={}
n=int(raw_input())
s=raw_input().split(' ')
s=[int(a) for a in s]
for a in range(0,len(s)):
    for b in range(len(s),a,-1):
        temp=s[a:b]
        try:
            z[min(temp)]
        except:
            z[min(temp)]=0
            z[min(temp)]+=1
        else:
            z[min(temp)]+=1
q=int(raw_input())
for a in range(q):
    k=int(raw_input())
    try:
        print z[k]
    except:
        print 0