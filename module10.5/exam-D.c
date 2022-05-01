#include<stdio.h>

int main(){
    int i,n;
    scanf("%d\n", &n);
    int Bjorn =0;
    int King =0;
    char china;
    //scanf("%c", &china);

    for(i=1; i<=n; i++){
        scanf("%c", &china);
        if(china=='A'){
            Bjorn++;
        } else if(china=='D'){
            King++;
        }

    }
        if(Bjorn>King){
            printf("Anton");
        }else if(Bjorn==King){
            printf("Friendship");
        }else{
            printf("Danik");
        }

return 0;
}
