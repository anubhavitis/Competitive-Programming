# cook your dish here
def cvowel(s):
    l=['a','e','i','o','u']
    if s in l:
        return 0
    else:
        return 1
for test in range(0,int(input())):
    n=int(input())
    cnt=0
    stg=input() 
    for i in range(0,n-1):
        x=cvowel(stg[i])
        y=cvowel(stg[i+1])
        if x==1 and y==0:
            cnt+=1
    print(cnt)
