#include<stdio.h>
int main(){
int num1,num2,result;
char c;

scanf("%d %d %c",&num1,&num2,&c);
switch(c){
case '+':
result=num1+num2;
printf("%d",result);
break;
case '-':
result=num1-num2;
printf("%d",result);
break;
case '*':
result=num1*num2;
printf("%d",result);
break;
case '/':
result=num1/num2;
printf("%d",result);
break;
default:
printf("error");
}
return 0;
}