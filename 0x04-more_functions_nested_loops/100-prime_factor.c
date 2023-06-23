#include <stdio.h>

int main(void)
{
	long	nb;
	long	max;
	long	save;
	long	save2;

	nb = 612852475143;
	max = 0;
	save = 0;
	while (nb != 1)
	{
		if (max < save)
			max = save;
		save2 = 1;
		while (++save2 <= nb)
		{
			if (nb % save2 == 0)
			{
				nb /= save2;
				save = save2;
				break;
			}
		}
	}
	printf("%ld\n", max);
	return (0);
}
