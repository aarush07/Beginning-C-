#include<stdio.h>

 int main ()
 {
	 int year;
	 printf("Leap year Checker:\n");
	 printf("Enter the year  ");
	 scanf("%d",&year);
	 
	 if (year%100==0 && year%400==0)
	 {
		 printf("It is leap year:");
		}
	else 
		{
			printf("It is not leap year");
			}
		 
	 }
