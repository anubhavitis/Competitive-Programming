#include<stdio.h>



main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int x[n],y[n];
        long long int i=0;
        while(i<n)
        {
            scanf("%lld %lld",&x[i],&y[i]);
            i++;
        }
        long long int h,k;
        scanf("%lld %lld",&h,&k);
        int check[8];
        for(i=0;i<8;++i) check[i]=1;
        long long int A[]={h-1,h-1,h-1,h,h+1,h+1,h+1,h};
        long long int B[]={k+1,k,k-1,k-1,k-1,k,k+1,k+1};
        int sum=0;
        for(i=0;i<n;++i)
        {
            if(x[i]>h+3 || x[i]< h-3 || y[i]>k+3 || y[i]< k-3 || (x[i]==h && y[i]==k)) continue;

            for(int z=0;z<8;z++)
            {
                if(check[z])
                {
                    if(A[z]==x[i]-1 && ( B[z]==y[i]+2 || B[z]==y[i]-2 ) ) {check[z]=0; sum++;}
                    if(A[z]==x[i]-2 && ( B[z]==y[i]+1 || B[z]==y[i]-1 ) ) {check[z]=0; sum++;}
                    if(A[z]==x[i]+1 && ( B[z]==y[i]+2 || B[z]==y[i]-2 ) ) {check[z]=0; sum++;}
                    if(A[z]==x[i]+2 && ( B[z]==y[i]+1 || B[z]==y[i]-1 ) ) {check[z]=0; sum++;}
                }
            }
            if(sum==8) break;
        }
        if(sum==8) printf("YES\n");
        else printf("NO\n");
    }
}
