#include<iostream>
using namespace std;
int cou()
{
 int count=0,rem,t;
 cin>>t;
 while(t)
 {
  rem=t%10;
  if(rem==4)
  count++;
  t/=10;
 }
 return count;
}
int main()
{
int a;
cin>>a;
int l[a];
for(int i=0;i<a;++i)
l[i]=cou();
for(int i=0;i<a;++i)
cout<<l[i]<<"\n";
return 0;
}
