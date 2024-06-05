#include "../sorting.h"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		init_list(argv, argc);
		ft_putchar('\n');
	}
	return 0;
}
