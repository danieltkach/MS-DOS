#include <stdio.h>
#include <time.h>

#define MAX_PRIME 32767L

int main()
{
	clock_t start, end;
	double cpu_time_used;

	char name[20];
	int i;
	int j;
	int isPrime = 1;

	clrscr();
	/*
	printf("Name? ");
	scanf("%s", name);
	printf("\nHey %s, welcome to MS-DOS Turbo C.\n", name);
	*/
	printf("As a welcome gift to you, here are the prime numbers lower than %ld.\n", MAX_PRIME);
	printf("Press a key when ready...\n");
	getch();

	start = clock();

	printf("2\t");
	for(i=3; i<MAX_PRIME; i++)
	{
		for(j=2; j*j<i; j++)
		{
			if (i % j == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
		{
			printf("%i\t", i);
		}
		isPrime = 1;
	}

	end = clock();

	cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
	printf("\nTime used: %f miliseconds.\n", cpu_time_used * 1000);

	getch();

	return 0;
}