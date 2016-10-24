#include<stdio.h>
		

		int main()
		{

			int a,b,largest,smallest;
			printf(" \t \t \t Use of terniary operator:\n \v");
			printf(" \t \t Enter two numbers:\n");
			scanf("%d %d",&a,&b);
			
			largest= (a>b)? a:b;
			printf("The largest number is %d \n",largest);
			smallest=(a<b)? a:b;	
			printf("The smallest number is %d \n",smallest);
			return 0;	
		}

				
			
