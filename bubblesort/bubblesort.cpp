#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int *number, int count)
{
	int i, j, hold;
	for (i = 0; i < count - 1; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (number[i] > number[j])
			{
				hold = number[i];
				number[i] = number[j];
				number[j] = hold;
			}
		}
	}
}
void show_numbers(int* number, int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%d ", number[i]);
	}
}
int main(void)
{
	int number[10];
	int i;
	printf("Enter 10 numbers:");
	for (i = 0; i < 10; i++)
	{
		printf("\n Enter entry %d .... ", i);
		scanf_s("%d", &number[i]);
	}
	printf("\nInput numbers are:\n");
	show_numbers(number, 10);
	bubble_sort(number, 10);
	printf("\nSorted numbers are:\n");
	show_numbers(number, 10);
	return 0;
}