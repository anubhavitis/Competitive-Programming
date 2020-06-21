t=int(raw_input())
while(t):
	t-=1
	n=int(raw_input())
	a=map(int,raw_input().split())
	print sum(a)-n+1
