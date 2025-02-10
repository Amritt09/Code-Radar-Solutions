#include<stdio.h>
#include<math.h>
int main(){
int num1,num2;
char op;
scanf("%d %d %c",&num1,&num2,&op);
if(op=='+'){
    printf("%d",num1+num2);
}
else if(op=='-'){
    printf("%d",num1-num2);
}
else if(op=='*'){
    printf("%d",num1*num2);
}
else if(op=='/'){
    if(num2!=0)
    printf("%d",num1/num2);
    else{printf("Error");}
}
else{
    printf("error");
}
return 0;
}