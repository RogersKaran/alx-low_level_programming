#include "main.h"

/**
 * infinite_add - adds two strings together.
 */

#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + 1 > size_r || len2 + 1 > size_r)
	{
		return (0);
	}

	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}

		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}

		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}
		r[k] = sum + '0';
		k++;
	}

	if (carry == 1)
	{
		if (k + 1 > size_r)
		{
			return (0);
		}
		r[k] = '1';
		k++;
	}

	r[k] = '\0';
	strsep(r);
	return (r);
}
