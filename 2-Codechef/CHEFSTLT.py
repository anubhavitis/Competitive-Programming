t=int(raw_input())
ans=l1=l2=[]
for i in range(t):
    mi=ma=0
    l1=raw_input()
    l2=raw_input()
    for j in range(len(l1)):
        if l1[j]=='?' or l2[j]=='?':
            ma=ma+1
        elif l1[j]!=l2[j]:
            mi=mi+1
    ans.append([mi,ma+mi])
for i in range(t):
    print ans[i][0],' ',ans[i][1]
