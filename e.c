	
		#include<stdio.h>
		
		int main()
		{
				
		int a,b,c,sum=0,average=0,greatest=0,smallest=0,product=0;
	
		printf("Enter three numbers: \n");
		scanf("%d %d %d",&a,&b,&c);
		sum=a+b+c;
		product=a*b*c;
		average=(a+b+c)/3;
		if (a>=b && a>=c)
		{
			greatest=a;
		}
		else if (b>=a && b>=c)
		{
			greatest=b;
		}
		else
		{
			greatest=c;
		}
	if (a<=b && a<=c)
		{
			smallest=a;
		}
		else if (b<=a && b<=c)
		{
			smallest=b;
		}
		else
		{
			smallest=c;
		}
	
	printf("The greatest is %d \n",greatest);
	printf("The sum of three number is %d \n",sum);
	printf("The product of three number is %d \n",product);
	printf("The average of three number is %d \n",average);
	printf("The smallest of three number is %d \n",smallest);


		return 0;			
		}
