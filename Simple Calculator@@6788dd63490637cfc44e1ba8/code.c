#include<stdio.h>
#include<math.h>
int main(){
int num1,num2;
char c;

scanf("%d %d %c",&num1,&num2,&c);
switch(c){
case "+":
printf("%d + %d ");
break;
case "-":
printf("%d - %d ");
break;
case "*":
printf(" %d * %d ");
break;
case "/":
printf("%d / %d ");
break;
default:
printf("error");}
return 0;
}