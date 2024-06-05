#include "../sorting.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t ft_str_len(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
