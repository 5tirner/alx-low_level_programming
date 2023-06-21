#include "main.h"

int main(void)
{
	unsigned long	j;
	unsigned long	k;
	unsigned long	t;

	j = 1;
	k = 2;
	t = 2;
	while (k + j < 4000000)
	{
		if (!k % 2)
			t += k;
		j = k - j;
		k += j;
	}
	printf("%ld\n", t);
	return (0);
}
