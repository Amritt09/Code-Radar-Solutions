#include<stdio.h>
#include<math.h>
int main(){
int a,b;
int result;
char op;
scanf("%c",&op);
scanf("%d %d %d",&a,&b,&result);
printf("%d ,%d ,%c,%d\n",a,b,op,result);
result = a op b;
return 0;
}