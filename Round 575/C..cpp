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
        int xi = (-1)*INT_MAX, xx = INT_MAX;
        int yi = (-1)*INT_MAX, yx = INT_MAX;
        while (n--) 
       	{
            int x, y, r, u, l, d;
            cin >> x >> y >> r >> u >> l >> d;
            if (!r) xi = max(xi, x);
            if (!u) yx = min(yx, y);
            if (!l) xx = min(xx, x);
            if (!d) yi = max(yi, y);
        }
        
        if (xi <= xx && yi <= yx)
            cout << "1 " << xi << " " << yi << "\n";
        else
            cout << "0\n";
    }
}