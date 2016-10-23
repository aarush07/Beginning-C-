#include <stdio.h>
 
int main () {

   int a,b,c=0;
   char operator;   
		printf("Enter operation you want to perform: \n");
		scanf("%c",&operator);   
		
		printf("Enter a number: \n");
		scanf("%d",&a);
		
		printf("Enter a number: \n");
		scanf("%d",&b);

		

		
   
	switch(operator) {
      
		case '+' :
 		        c=a+b;
			printf("Your result  %d \n",c );
        	break;
         	
		case '-' :
         		c=a-b;
			printf("Your result  %d \n",c );
         	break;
	
		case '*' :
		        c=a*b;
			printf("Your result  %d \n",c );
         	break;
	
		case '/' :
         		c=a/b;
			printf("Your result  %d \n",c );
         	break;
      
      
      
	 	default :
         		printf("Invalid input\n" );
   			
			}
   
   
 
   	return 0;
}
