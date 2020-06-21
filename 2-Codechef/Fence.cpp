#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
main(){
    FastIO()

	int t;
	ll n,m,k,ctr,temp;
	cin>>t;
	while(t--){
        cin>>n>>m>>k;
        ctr=k*4;
        vector< pair<ll,ll> > x,y;
        vector< pair<ll,ll> >::iterator itf;
        ll a,b;
        for(ll i=0;i<k;++i){
            cin>>a>>b;
            x.push_back(make_pair(a,b));
            y.push_back(make_pair(b,a));
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        itf=x.begin();
        ll l1=(*itf).first;
        ll l2=(*itf).second;
        for(itf++;itf!=x.end();++itf){
            a=(*itf).first;
            b=(*itf).second;
            if(a==l1 &&b-1==l2) ctr-=2;
            l1=a;
            l2=b;
        }
        itf=y.begin();
        l1=(*itf).first;
        l2=(*itf).second;
        for(itf++;itf!=y.end();++itf){
            a=(*itf).first;
            b=(*itf).second;
            if(a==l1 &&b-1==l2)  ctr-=2;
            l1=a;
            l2=b;
        }
        cout<<ctr<<"\n";
	}
}
