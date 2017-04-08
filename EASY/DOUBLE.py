# your code goes here
t=int(raw_input())
i=0
while(i<t):
    try:
        n=int(raw_input())
    except:
        break
    finally:
        if(n%2==1):
            print n-1
        else:
            print n
    i+=1
        