#include<stdio.h>

int main()
{
    int x,marks=0;
    scanf("%d",&x);

    if(x >= 90){
        printf("expert");
    }
    else if(x >= 70 & x <= 90){
        marks = 90 - x;
        printf("%d",marks);
    }
     else if(x >= 40 & x <= 70){
        marks = 70 - x;
        printf("%d",marks);
    }
     else if(x >= 0 & x <= 40){
        marks = 40 - x; //marks = 40 - x;
        printf("%d",marks);
    }

    return 0;
}
