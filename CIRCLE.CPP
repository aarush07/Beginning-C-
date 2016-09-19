/*
Student Name	:Aarush Baba Rijal
Subject		:Programming FUndamentals
Rollno.		:01
Program		:To Calculate area and circumference of cirlce
Lab no.		:02
Date		:19 September,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
	void main()
		{
		float radius,area,circumference;
		clrscr();
		printf("Enter radius of cirlce:\n");
		scanf("%f",&radius);
		area=pi*pow(radius,2);
		circumference=2*pi*radius;
		printf("The area of cirlce is: %f \n",area);
		printf("The circumference ofcirlce i:%f\n",circumference);
		getch();
		}
