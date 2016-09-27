/*
Student name: Aarush Baba Rijal
Subject     :ProgrammingFundamentals
Roll        :01
Lab no.     :03
program.    :
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
        void main ()
            {
             int a,b,c,root1=0,root2=0,dis=0;
             printf("Enter coeffecient of x");

             scanf("%d",&a);
             printf("Ehter the coeffecient of y");
             scanf("%d",&b);
             printf("Enter the coeffecientof z");
             scanf("%d",&c);

                root1= (-b + pow(b*b-4*a*c,(1/2)))/(2*a);
                root2= (-b - pow(b*b-4*a*c,(1/2)))/(2*a);

             printf("The roots are: %d,%d",root1,root2);
             getch();

            }
