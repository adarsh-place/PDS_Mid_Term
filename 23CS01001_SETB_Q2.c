#include<stdio.h>

int main(){

    int l,u;

    printf("Input lower limit: ");
    scanf("%d",&l);

    printf("Input upper limit: ");
    scanf("%d",&u);

    int count=0;
    printf("Perfect Numbers are: ");

    for(int i=l;i<u;i++){
        int temp=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                temp+=j;
            }
        }
        if(temp==i){
            printf("%d ",i);
            count++;
        }
    }

    if(count==0){
        printf("Zero perfect numbers");
    }

    return 0;
}