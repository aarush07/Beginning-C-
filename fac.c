			
			#include<stdio.h>
			//#include<conio.h>
				
				int main()
					{
						int a,fac=1;
						printf("enter a number whose factorial you want:\n");
						scanf("%d",&a);
						do
						{
							
							fac = fac *a;			
							
							a--;
						
						} while(a!=0);
						printf("The factorial is %d \n",fac);	
				return 0;

					}
