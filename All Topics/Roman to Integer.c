int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	charMatcher(char c)
{
	char	*str;
	int		index;
	int		return_value;

	index = 0;
	str = "IVXLCDM";
	while (str[index])
	{
		if (c == str[index])
			break;
		index++;
	}
	if (index % 2 == 0)
		return_value = 1;
	else
		return_value = 5;
	index /= 2;
	while (index--)
		return_value *= 10;
	return (return_value);
}

int romanToInt(char* s)
{
	int		value;
	int		last_index;
	int		current_val;
	int		last_value;

	last_index = ft_strlen(s);
	last_value = 0;
	value = 0;
	while (last_index--)
	{
		current_val = charMatcher(s[last_index]);
		if (current_val < last_value)
			value -= current_val;
		else
			value += current_val;
		last_value = current_val;
	}
	return (value);
}
#include <stdio.h>

int	main(void)
{
	printf("%d", romanToInt("VII"));
}