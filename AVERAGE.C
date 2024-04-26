#include <stdio.h>

void main()
{
	int how_many = 0;
	int value;
	int sum = 0;
	int i = 1;

	clrscr();
	do
	{
		printf("How many? (0 to exit) ");
		scanf("%d", &how_many);
		if (how_many == 0)
		{
			exit();
		}
		if (how_many < 0)
		{
			printf("Amount must be greater than 0.\n");
		}
	} while (how_many < 0);

	while(i <= how_many)
	{
		printf("Value for item #%d: ", i);
		scanf("%d", &value);
		sum += value;
		i++;
	}

	printf("Average: %d\n", sum / how_many);
	getch();
}