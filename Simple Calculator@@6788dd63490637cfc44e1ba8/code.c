#include<stdio.h>
#include<math.h>
int main(){
int num1,num2,result;
char c;
scanf("%d %d %c",&num1,&num2,&c);
if(c=='+'){
    printf("%d",num1+num2);
}
else if(c=='-'){
    printf("%d",num1-num2);
}
else if(c=='*'){
    printf("%d",num1*num2);
}
else if(c=='/'){
    printf("%d",num1/num2);
}
else{
    printf("Error");
}
return 0;
}