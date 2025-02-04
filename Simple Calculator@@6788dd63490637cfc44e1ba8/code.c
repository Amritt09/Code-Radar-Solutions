#include<stdio.h>
#include<math.h>
int main(){
int num1,num2;
char c;
scanf("%d %d %c",&num1,&num2,&c);
switch(c);
case "+":
printf("num1 + num2 = num3");
break;
case "-":
printf("num1 - num2 = num3");
break;
case "*":
printf("num1 * num2 = num3");
break;
case "/":
printf("num1 / num2 = num3");
break;
default:
printf("error");
return 0;
}