#include<stdio.h>
#include<conio.h>
    void main()
        {
            int a,b;
            printf("enter a number: \n");

            scanf("%d",&a);
                printf("Enter another number: \n");
                scanf("%d",&b);
                printf("THe use of Assignment Operator:\n");
                printf("The use of += \n");
                printf("%d",a+=b);
                printf("The use of -= \n");
                printf("%d",a-=b);
                 printf("The use of *= \n");
                printf("%d",a*=b);
                 printf("The use of /= \n");
                printf("%d",a/=b);
                 printf("The use of %= \n");
                printf("%d",a%=b);
                getch();
        }
