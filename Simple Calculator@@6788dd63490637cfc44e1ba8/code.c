#include<stdio.h>
#include<math.h>
int main(){
int num1,num2;
char c;

scanf("%d %d %c",&num1,&num2,&c);
switch(c){
case '+':
printf("%d",num1+num2);
break;
case '-':
printf("%d",num1 - num2);
break;
case '*':
printf("%d",num1* num2);
break;
case '/':
printf("%d",num1/num2);
break;
default:
printf("error");
}
return 0;
}