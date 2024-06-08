#include<unistd.h>
#include<stdio.h>
#define MAX 10

void swap(int *x,int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y =tmp;
}
void selection(int n,int *array)
{
	int i = 0;
	int min;
	int j;

	while(i < (n -1))
	{
		min = i;
		j = i+1;
		while(j < n)
		{
			if(array[j] < array[min])
			{
				min= j;
			}
			j++;
		}
		if(min != i)
		{
			swap(&array[min],&array[i]);
		}
		i++;
	}
}
int main()
{
	int array[MAX] = {3,2,5,4,1};
	
	selection(MAX,array);

	int i = 0;
	while(array[i] < MAX)
	{
		printf("%d\n",array[i]);
		i++;
	}
	return (0);
}


