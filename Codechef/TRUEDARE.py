def work(t):
 for i in range(t):
    tr=int(raw_input())
    TR=map(int,raw_input().split())
    dr=int(raw_input())
    DR=map(int,raw_input().split())
    ts=int(raw_input())
    TS=map(int,raw_input().split())
    ds=int(raw_input())
    DS=map(int,raw_input().split())
    f=0
    for item in TS:
        if item not in TR:
            f=1;
    for item in DS:
        if item not in DR:
            f=1;

    if(f==0):
        print "yes"
    else: print "no"
 return 0

t=int(raw_input())
work(t)
