/*
Student Name: Aarush Baba Rijal
Subject     : Programming Fundamentals
Roll        : 01
Program     : Write a program to print the square root of any two numbers
Lab no.     : 01
Date        : 18 September,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
	void main()
		{
		clrscr();
		float  num,square_root;
		printf("Enter a number \n");
		scanf("%f",&num);
		square_root= sqrt(num);

		printf("The square root is: %f \n",square_root);
		getch();
		}


