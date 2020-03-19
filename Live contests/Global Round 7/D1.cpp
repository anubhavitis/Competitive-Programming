    //Mark XXI
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
    #define rep(a,b,c) for(int i=a; i<b; i+=c)
    using namespace std;
     
    void solve()
    {
      string s;
      cin>>s;
      int l=s.size();
      int b=0,e=l-1;
      while(s[b]==s[e] and b<=e ) { b++, e--; }
      if(b>e) {cout<<s<<endl; return;}
      deb(b)deb(e)
      ll l1=1,l2=1;
     
      for(int i=e;i>=b+1;--i)
      {
        if(s[i]==s[b])
        {
          string s1=s.substr(b,i-b+1);
          string s2=s1;
          reverse(all(s2));
          if(s1==s2) { l1=i+1-b; break;}
        }
      }
      for(int i=b;i<e;++i)
      {
        if(s[i]==s[e])
        {
          string s1=s.substr(i,e+1-i);
          string s2=s1;
          reverse(all(s2));
          if(s1==s2) { l2=e+1-i; break;}
        }
      }
      deb(l2)deb(l1)
      if(b!=0) 
      {
        if(l2>l1) cout<<s.substr(0,b)<<s.substr(e-l2+1,l2+b)<<endl;
        else cout<<s.substr(0,l1+b)<<s.substr(e+1,b)<<endl;
        return;
      }
      if(l2>l1) cout<<s.substr(e+1-l2,l2)<<endl;
      else cout<<s.substr(0,l1)<<endl;
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
      cin>>t;
      while(t--)
        solve();
    }