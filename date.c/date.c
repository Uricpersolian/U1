#include<stdio.h>
int main(void)
{
int month,day,year,week;
printf("enter date (mm/dd/yy):");
scanf("%d/%d/%d",&month,&day,&year);
printf("dated this %d",day);
switch(day)
 {
	case 1:case 21:case 31:
		printf("st");break;
	case 2:case 22:
	 	printf("nd");break;
	case 3:case 23:
	  	printf("rd");break;
	default:
	   	printf("th");break;
 }
 printf(" day of ");
 switch(month){
 	case 1:   printf("Jan");
 	    break;
	case 2:	  printf("Feb");
	    break; 
	case 3:   printf("mar");
 	    break;
	case 4:   printf("Apr");
 	    break;
 	case 5:   printf("May");
 	    break;
	case 6:	  printf("june");
	    break; 
	case 7:   printf("July");
 	    break;
	case 8:   printf("Aug");
 	    break;
 	case 9:   printf("Sep");
 	    break;
	case 10:  printf("Oct");
	    break; 
	case 11:   printf("Nov");
 	    break;
	case 12:   printf("Dec");
 	    break;
 
  }
 printf(", 20%.2d.",year);
 week=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;
 switch (week)
 {
   case 0:printf("MON");
   break;
   case 1:printf("TUS");
   break;
   case 2:printf("WEN");
   break;
   case 3:printf("THU");
   break;
   case 4:printf("FRI");
   break;
   case 5:printf("SAT");
   break;
   case 6:printf("SON");
   break;
   }
 
 return 0;
 } 
