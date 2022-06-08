#include <stdio.h>
#include "main.h"

int times_table(void)
{
	int i;
	int k = 0;

	while (k <= 9)
	{
		for (i = 0; i <= 10; i++)
		{
			int u;

			u = k * i;
			return (u);
		}
		k++;
	}
}
