/*
Student Name	:Aarush Baba Rijal
Subject	     	:Programming Fundamentals
Roll		:01
Program		:Write a program to print surafe area and volume of sphere
Lab no.		:01
Date		:18 September,2016
*/
#include<stdio.h>
#include<conio.h>
	void main()
		{
		int radius, surface_area, volume;
		clrscr();
		printf("Enter the radius of sphere: \n");
		scanf("%d",&radius);
		surface_area=4*(22/7)*(radius^2);
		volume=(4/3)*(22/7)*(radius^3);
		printf("The surface area of square is:  %d\n",surface_area);
		printf("The volume of shpere is:  %d \n",volume);
		getch();
		}


