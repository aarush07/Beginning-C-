/*
Student name   : Aarush Baba Rijal
Subject         : Programming Fundamentals
Roll            : 01
program         : To calculate
Lab no.         :
Date            : 29 September,2016
*/

#include<stdio.h>
#include<conio.h>
    void main()
            {
                char name[20];
                float a,b,c,d,e,f,g,total=0,per=0;

                printf("Enter your name: \n");
                scanf("%s",&name);
                printf("Enter your marks in Programming Fundamentals: \n");
                scanf("%f",&a);
                printf("Enter your marks in Computer architecture: \n");
                scanf("%f",&b);
                printf("Enter your marks in Algebra: \n");
                scanf("%f",&c);
                printf("Enter your marks in Discrete Mathematics: \n");
                scanf("%f",&d);
                printf("Enter your marks in Interactive Skills: \n");
                scanf("%f",&e);
                printf("Enter your marks in Organization Management: \n");
                scanf("%f",&f);
                printf("Enter your marks in Swaumya: \n ");
                scanf("%f",&g);
                total=(a+b+c+d+e+f+g);
                per= (total)/7;
                printf("The percentage is: %f \n",per);
                getch();
                }




