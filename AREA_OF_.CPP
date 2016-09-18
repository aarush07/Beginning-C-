/*
Student Name	:Aarush Baba Rijal
Subject 	:Programming Fundamentals
Roll		:01
Program		:write a program to calculate area of Trapezium
Lab no.1
Date		:18 September,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
	void main()
		{


		int len,bre,hei;
		int area;
		clrscr();
		printf("Enter the length of Trapezium: \n");
		scanf("%d",&len);
		printf("Enter the breadth of Trapezium: \n");
		scanf("%d",&bre);
		printf("Enter the height of Trapezium: \n");
		scanf("%d",&hei);
		area= 0.5*(len+bre)*hei;
		printf("The area of Trapezium is: \n %d",area);
		getch();

		}