# your code goes here
def isPalin(s):
    return s==s[::-1]
def shift(s,i):
    #print  s[:i]+s[i+1:]
    return s[:i]+s[i+1:]
def main():
    t=int(raw_input())
    i=0
    while(i<t):
        s=raw_input()
        count=0
        l=len(s)-1
        j=l
        k=0
        while(k<=l):
            if(s[k]!=s[j]):
                if(s[k+1]==s[j]):
                    if(isPalin(shift(s,k))):
                        print "YES"
                        count=1
                        break
                    else:
                        count=3
                    
                if(s[k]==s[j-1]):
                        if(isPalin(shift(s,j))):
                            print "YES"
                            count=1
                        else:
                            count=3
                        break  
                else:
                	count=3
                break
                
            else:
                k+=1
                j-=1
        if(count==0):
            print "YES"
        elif(count==3):
            print "NO"
        i+=1
main() 