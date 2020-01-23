#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main()
{
    //Skipped in presense of online judge.
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    IOS()

    int q,n;
    cin>>q;
    while (q--)
    {
        int n;
        cin >> n;
        int xi = -100000, xx = 100000;
        int yi = -100000, yx = 100000;
        while (n--) 
       	{
            int x, y, r, u, l, d;
            cin >> x >> y >> r >> u >> l >> d;
            if(r==0)	if(x>xi) xi=x;
			if(u==0)	if(y<yx) yx=y;
			if(l==0)	if(x<xx) xx=x;
			if(d==0)	if(y>yi) yi=y;
        }
        
        if (xi <= xx && yi <= yx)
            cout << "1 " << xi << " " << yi << "\n";
        else
            cout << "0\n";
    }
}