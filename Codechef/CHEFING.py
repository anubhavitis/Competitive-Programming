t=int(raw_input())
while(t):
	n=int(raw_input())
	l=[]
	f=0
	while(n):
		x=set(raw_input())
		if(f==0):
		 l=l+list(x)
		 f=1
		l=list(x.intersection(l))	
		n-=1
	print len(l)
	t-=1
