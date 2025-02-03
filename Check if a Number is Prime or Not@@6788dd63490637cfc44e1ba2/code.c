#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i = 3;i*i<=num;i++){
        if(num%i=0)
        {printf("Prime");}
        else{printf("Not prime");}
        return 0;
    }
}
   
