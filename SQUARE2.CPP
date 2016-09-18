/*
Student Name: Aarush Baba Rijal
Subject     : Programming Fundamentals
Roll        : 01
Program     : Write a program to print the square of any two numbers
Lab no.     : 01
Date        : 18 September,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
	void main()
		{
		clrscr();
		int  num,square;
		printf("Enter a number \n");
		scanf("%d",&num);
		square= pow(num,2);
		printf("The square root is: %d \n",square);
		getch();
		}
