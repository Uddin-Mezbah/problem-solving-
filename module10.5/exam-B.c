#include <stdio.h>

int main()
{
    int a,b,n,i,c,p=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d%d", &a, &b);
        c=b-a;
        if(c>=2) p++;

    }
     printf("%d\n", p);

    return 0;
}
