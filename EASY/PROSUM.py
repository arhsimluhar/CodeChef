import sys
t=int(raw_input())
for a in range(t):
    n=int(raw_input())
    w=map(int,sys.stdin.readline().split())
    s=w.count(1)+w.count(0)
    b=w.count(2)
    b=(b*(b-1))/2
    n=n-s
    print((n*(n-1)/2)-b)    