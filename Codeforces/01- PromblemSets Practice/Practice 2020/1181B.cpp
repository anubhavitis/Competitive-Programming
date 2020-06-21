//Mark XIX
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

int temp;

using namespace std;
string s;

string sum(string str1, string str2) 
{ 
  if (str1.length() > str2.length()) 
    swap(str1, str2); 

  string str = ""; 
  int n1 = str1.length(), n2 = str2.length(); 
  int diff = n2 - n1; 
  int carry = 0; 

  for (int i=n1-1; i>=0; i--) 
  { 
    int sum = ((str1[i]-'0') + 
               (str2[i+diff]-'0') + 
               carry); 
    str=char(sum%10 + '0')+str; 
    carry = sum/10; 
  } 

  for (int i=n2-n1-1; i>=0; i--) 
  { 
      int sum = ((str2[i]-'0')+carry); 
      str= char(sum%10 + '0')+str; 
      carry = sum/10; 
  } 
  if (carry) 
      str=char(carry+'0')+str; 
  return str; 
} 

void solve()
{
  int n;
  cin>>n>>s;
  int ml=n/2,mr=n/2;
  while(s[ml]=='0' and ml>0) ml--;
  while(s[mr]=='0' and mr<n) mr++;
  deb(ml)deb(mr)
  if(n%2==0)
  {
    string s1= sum(s.substr(0,ml),s.substr(ml));
    string s2= sum(s.substr(0,mr),s.substr(mr));
    if(s1.size()>s2.size() or s1[0]=='0') cout<<s2;
    else if(s1.size()<s2.size() or s2[0]=='0') cout<<s1;
    else 
      cout<<min(s1,s2);
    return;
  }
  // deb(sum(s.substr(0,ml+1),s.substr(ml)))
  string s1=sum(s.substr(0,ml),s.substr(ml));
  string s2=sum(s.substr(0,mr),s.substr(mr));
  deb(s1.size())deb(s2.size())
  if(s1.size()>s2.size() or s1[0]=='0') cout<<s2;
  else if(s1.size()<s2.size() or s2[0]=='0') cout<<s1;
  else 
    cout<< min ( sum(s.substr(0,ml+1),s.substr(ml+1)),
                sum(s.substr(0,mr),s.substr(mr))  );
}

int main()
{
  //Skipped in presense of online judge.
  #ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt","r",stdin);
  freopen("/home/zeddie/Documents/output.txt","w",stdout);
  freopen("/home/zeddie/Documents/error.txt","w",stderr);
  #endif

  IOS()
  ll t=1;
  //cin>>t;
  while(t--)
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}