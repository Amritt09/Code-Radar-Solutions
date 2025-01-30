#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b)
    {
        if(b==c){
            if(c==a){
                printf("Equilateral");
            }
        }
    }
    if(a==b||b==c||c==a)
    {printf("Isosceles");}
    else{printf("Scalene");}
    return 0;
    }
