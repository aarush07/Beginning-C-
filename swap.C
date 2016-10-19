
				#include<stdio.h>
		
		
					int main ()
					
						{
				
					int a,b,temp;
						
					
					
					printf ("enter the first number:");
					
					scanf ("%d",&a);
					
					printf("Enter the second number:");
					
					scanf("%d",&b);
					
					printf("Value of a  before swap: %d \n",a);
					
					printf("Value of b before swap %d \n",b);
					
					temp=a;
					
					a=b;
					
					b=a;
					
					printf("The swaped value of a is: %d \n",a);
					
					printf("The swaped value of b is: %d",b);
					return 0;
				}

