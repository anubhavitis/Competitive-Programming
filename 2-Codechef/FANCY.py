# cook your code here
t=int(raw_input())
for i in range(t):
    s=raw_input()
    f=0
    x=s[0:5]
    y=len(s)
    if y==3 and 'not' in s: f=1
    elif 'not ' in x: f=1
    elif ' not' in x: f=1
    else:
        x=s[y-5:y]
        if ' not' in x: f=1
    if f==0 and(' not ' in s): f=1
    if f==1: print "Real Fancy"
    else: print "regularly fancy"
    
    
