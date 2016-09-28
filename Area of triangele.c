/*
Student name: Aarush Baba Rijal
Subject     :ProgrammingFundamentals
Roll        :01
Lab no.     :04
program.    :To calculate area of triangle
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
        void main()
            {
            float a,b,c,s=0,A;

            printf("Enter the first side");
            scanf("%f",&a);
            printf("Enter the second side");
            scanf("%f",&b);
            printf("Enter the third side");
            scanf("%f",&c);
            s=(a+b+c)/2;
            A=pow((s*(s-a)*(s-b)*(s-c)),0.5);

            printf("The area is %f",A);
            getch();
            }
