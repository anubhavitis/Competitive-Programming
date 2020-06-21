#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b;
    long long int test,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        long long int A,B,AB;
        A=B=AB=0;
        for(long long int i=0;i<n;++i)
        {
            cin>>test;
            if(test%a==0 && test%b==0) AB++;
            else if(test%a==0) A++;
            else if(test%b==0) B++;
        }
        int ch=AB>0?2:1;
        if(A==0 && B==0)
        {
            if(ch==1) cout<<"ALICE\n";
            else cout<<"BOB\n";
        }
        else
            if(ch==1)
            {
                if(A==B) cout<<"ALICE\n";
                else if(A<B) cout<<"ALICE\n";
                else if(A>B) cout<<"BOB\n";
            }
            else
            {
                if(A==B) cout<<"BOB\n";
                else if(B<A) cout<<"BOB\n";
                else if(B>A) cout<<"ALICE\n";
            }
    }

    return 0;

}
