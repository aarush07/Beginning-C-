/*
Student name: Aarush Baba Rijal
Subject     :ProgrammingFundamentals
Roll        :01
Lab no.     :03
program.    :To Calculate Compound Intrest
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
        void main()
            {
            float p,t,r,ci=0;

            printf("Enter the principle");
            scanf("%f",&p);
            printf("Enter the rate");
            scanf("%f",&r);
            printf("Enter the time");
            scanf("%f",&t);
            ci=p*(pow(1+r/100,t)-1);
            printf("The compound intrest is: %f",ci);
            getch();


            }
