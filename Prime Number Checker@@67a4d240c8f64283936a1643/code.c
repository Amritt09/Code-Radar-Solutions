#include<stdio.h>
int prime_num(int num);
int prime_num(int num){
    if (num >= 2){
        for (int i = 2;i < num; i++){
            if (num %2  == 0)
            {
                return 0;
            }
            return 1;
        }

    }
}

int main(){
    int num;
    scanf("%d",&num);
    while( num ){
        int a;
        scanf("%d",&a);
        printf("%d",prime_num(a))
        num--;

    } 
}