#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long int

main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	int t;
	cin>>t;
	while(t--)
	{
        char n[20];
        char d;
        cin>>n>>d;
        int l=strlen(n);
        int pos=0;char ch;
        string ans="";
        while(pos!=l)
        {
            ch=n[pos];
            for(int i=pos+1;i<l;++i)
                if(ch>n[i])
                {
                    ch=n[i];
                    pos=i;
                }
            if(ch<d) {ans+=ch; pos++;}
            else break;
        }
        cout<<ans;
        int g=ans.length();
        for(int x=0;x<l-g;x++)
            cout<<d;
        cout<<"\n";
	}

}
