t=int(raw_input())
for i in range(t):
    c=raw_input()
    r=0
    g=0
    n=len(c)
    if(c[0]==c[n-1]):
            if c[0]=='R': r+=1
            else: g+=1
    for j in range(n-1):
        if(c[j]==c[j+1]):
            if c[j]=='R': r+=1
            else: g+=1
        if(r==2 or g==2):
            break
    if (r==1 and g==1) or (r==0 and g==0): print "yes"
    else: print "no"
