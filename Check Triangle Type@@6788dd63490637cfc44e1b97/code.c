#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    if (a+b>c&&b+c>a&&a+c>b);{
    scanf("%d %d %d", &a,&b,&c);
    if(a==b&&b==c&&c==a);
    {printf("Equilateral");}
    if(a==b||b==c||c==a)
    {printf("Isosceles");}
    else{printf("Scalene");}
    return 0;
    }
}