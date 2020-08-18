#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter first Number : ");
	scanf("%d",&x);
	printf("Enter Second Number : ");
	scanf("%d",&y);

	if (x < y)
	{
		for (int i = x; i > 1; i--)
		{
			if (x % i == 0 & y % i == 0)
			{
				printf("Greatest common divisor = %d", i);
				break;
			
			
			}



		}
	}

	if (x > y)
	
	{
		for (int i = y; i > 1; i--)
		{
			if (x % i == 0 & y % i == 0)
			{
				printf("Greatest common divisor = %d", i);
				break;


			}



		}
		
			
		
	}

	return 0;
}