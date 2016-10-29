#include<stdio.h>
		int main()
			{
				
				int num,sum=0;
				printf("Enter a number: \n");
				scanf("%d",&num);
				
				do
			        {
				sum= sum+num;
				num--;
				} while(num>=0);
				printf ("The sum of natural number is:  %d \n",sum);
			return 0;
			}
