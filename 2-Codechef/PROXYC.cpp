#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        int req=ceil(d*0.75);
        string str,dup;
        cin>>str;
        dup=str;
        sort(dup.begin(),dup.end());
        string::iterator t=lower_bound(dup.begin(),dup.end(),'P');
        int cnt=d-(t-dup.begin());
        cnt=req-cnt;

        req=cnt;
        for(int i=2;i<d-2 && cnt>0;++i)
            if(str[i]=='A')
                if((str[i-1]=='P' || str[i-2]=='P') && (str[i+1]=='P' || str[i+2]=='P'))
                cnt--;
        if(req<=0) cout<<"0\n";
        else if (cnt==0) cout<<req<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}
