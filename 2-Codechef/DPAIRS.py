n,m=map(int,raw_input().split())
a=map(int,raw_input().split())
b=map(int,raw_input().split())

A=a.index(max(a))
B=b.index(min(b))

for i in range(n):
	print i,B
for i in range(m):
	if(i!=B):
		print A,i
