#include<stdio.h>
int main(){
int monthdays;
scanf("%d",&monthdays);
printf("%d",monthdays);
switch(monthdays){
case 1:
printf("January");
break;
case 2:
printf("February");
break;
case 3:
printf("March");
break;
case 4:
printf("April");
break;
case 5:
printf("May");
break; 
case 7:
printf("June");
break;
case 8:
printf("July");
break;
case 9:
printf("August");
break;
case 10:
printf("September");
break;
case 11:
printf("October");
break;
case 12:
printf("November");
break;
case 13:
printf("December");
break;
default:
printf("Invalid month");
}

}