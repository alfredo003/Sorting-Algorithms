#include "../sorting.h"

void swap(int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void selection(Item *v, int n)
{
	int i, j, min_value;

	for (i = 0; i < n - 1; i++)
	{
		min_value = i;
		for (j = i + 1; j < n; j++)
		{
			if (v[j] < v[min_value])
				min_value = j;
		}
		if (min_value != i)
			swap(&v[min_value], &v[i]);
	}
}

void init_list(char **str, int argc)
{
	int total_len = 0;
	for (int i = 1; i < argc; i++)
		total_len += ft_str_len(str[i]);

	Item *v = (Item *)malloc(total_len * sizeof(Item));
	if (!v)
		return;

	int index = 0;
	for (int i = 1; i < argc; i++)
	{
		int c = 0;
		while (str[i][c] != '\0')
		{
			v[index++] = str[i][c];
			c++;
		}
	}

	selection(v, total_len);

	for (int i = 0; i < total_len; i++)
		ft_putchar(v[i]);

	free(v);
}

void ft_print(char **str)
{
	int i = 1;
	while (str[i])
	{
		int c = 0;
		while (str[i][c] != '\0')
		{
			ft_putchar(str[i][c]);
			c++;
		}
		ft_putchar(' ');
		i++;
	}
}
