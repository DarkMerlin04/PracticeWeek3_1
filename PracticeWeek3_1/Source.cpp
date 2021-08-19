#include<stdio.h>
int main()
{
	int x;
	printf("Input number : ");
	scanf_s("%d", &x);
	while (x >= 10)
	{
		for (int i = 0; i < 3; i++)
		{
			int first = x % 10;
			x = x / 10;
			int second = x % 10;
			x = x / 10;
			int third = x % 10;
			x = first * second * third;
			if (x == 0)
			{
				printf("%d . %d . %d = %d\n", third, second, first, x);
				return 0;
			}
			else
			{
				printf("%d . %d . %d = %d\n", third, second, first, x);
			}
		}
	}
	return 0;
}