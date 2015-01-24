t=int(raw_input(''))
for a in range(t):
    s=raw_input()
    if(s.find('101')!=-1 or s.find('010')!=-1):
        print("Good")
    else:
        print("Bad")
    