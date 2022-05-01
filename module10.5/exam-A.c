#include<stdio.h>

int main()
{
    int n,k,a;
    scanf("%d %d %d ",&n,&k,&a);
    int sum = 0;
    sum = a;

    for (int i = 1;i<k;i++){
        if(sum == n){
            sum = 1;
        }
        else{
            sum++;
        }
    }
    printf("%d",sum);



    return 0;
}
