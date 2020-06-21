#include<stdio.h>

main()
{
    int t;
    scanf("%d",&t);
    int x,y,z;
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y==z || x+z==y || x==y+z)  printf("yes\n");
        else printf("no\n");
    }
}
