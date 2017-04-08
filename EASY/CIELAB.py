def get_positive(number):
    if number>=0:
        return number
    else:
        return -1*number
x=raw_input()
y=x.split()
correct_ans=str(int(y[0])-int(y[1]))
positive_correct_ans=str(get_positive(correct_ans))
a=[]
for i in positive_correct_ans:
    a.append(i)
    
 
if int(a[0])==9:
    a[0]=str(1)
else:
    a[0]=str(int(a[0])+1)
print ''.join(a)
 