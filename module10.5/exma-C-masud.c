#include <stdio.h>

int main()
{
    int S,T,X;
    scanf("%d %d %d", &S,&T,&X);
    if(T>S){
        if(X<S)
        printf("No\n");
        else if(X<T)
        printf("Yes\n");
        else
        printf("No\n");
    }
    else{
        if(X>=S)
            printf("Yes\n");
        else if(X<T)
            printf("Yes\n");
        else
            printf("No\n");
    }


}
