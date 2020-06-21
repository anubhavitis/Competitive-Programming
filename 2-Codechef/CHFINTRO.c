#include<stdio.h>

main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int nr;
    while(n--)
    {
        scanf("%d",&nr);
        if(nr<r) printf("Bad boi\n");
        else printf("Good boi\n");
    }
}
