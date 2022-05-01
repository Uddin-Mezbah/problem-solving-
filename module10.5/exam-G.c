#include <stdio.h>
//#include<string.h>

int main()
{
    //int x,y,i,a=0;
    int a,b,i,x=0;
    scanf("%d%d", &a, &b);
    for(i=a;i<=b;i++){
        x++;
    }
    if(a>b)
    printf("%d\n");
    else
    printf("%d\n",x);

    return 0;
}
