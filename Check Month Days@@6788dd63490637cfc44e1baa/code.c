#include<stdio.h>
int main(){
int monthdays;
scanf("%d",&monthdays);
//printf("%d",monthdays);
switch(monthdays){
case 1:
printf("31\n");
break;
case 2:
printf("28");
break;
case 3:
printf("31");
break;
case 4:
printf("30");
break;
case 5:
printf("31");
break; 
case 7:
printf("30");
break;
case 8:
printf("31");
break;
case 9:
printf("31");
break;
case 10:
printf("30");
break;
case 11:
printf("31");
break;
case 12:
printf("30");
break;
case 13:
printf("31");
break;
default:
printf("Invalid month");
}

}