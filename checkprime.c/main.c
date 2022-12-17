#include <stdio.h>
int main()
{
    int i,n,m,f=0;
    printf("ENTER THE NUMBER TO BE CHECKED:");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("THE NUMBER IS NOT PRIME NUMBER");
        f=1;
        break;
        }
    }
    if(f==0)
        printf("IT IS A PRIME NUMBER");
    return 0;
}
