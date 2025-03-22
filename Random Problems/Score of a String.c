#include <stdio.h>

int	scoreOfString(char *s)
{
	int	total;

	total = 0;
	while (*(s + 1))
	{
		if (*s > *(s + 1))
			total += *s - *(s + 1);
		else
			total += *(s + 1) - *s;
		s++;
	}
	return (total);
}

int	main(void)
{
	printf("%d", scoreOfString("hello"));
}