#include <stdbool.h>
#include <stdio.h>

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

bool	is_open_paranthesis(char c)
{
	if (c == '(' || c == '{' || c == '[')
		return (true);
	return (false);
}

bool	checkMatch(char brack_open, char brack_close)
{
	if (brack_open == '(' && brack_close == ')')
		return (true);
	else if (brack_open == '[' && brack_close == ']')
		return (true);
	else if (brack_open == '{' && brack_close == '}')
		return (true);
	return (false);
}

bool	isValid(char *s)
{
	int		index = -1;
	int		strlen = ft_strlen(s);
	if (strlen % 2 == 1 || strlen == 0)
		return (false);
	int		open_brack_index = 0;
	char	array[strlen / 2];
	while (s[++index])
	{
		if (is_open_paranthesis(s[index]))
		{
			if (open_brack_index >= strlen/2)
				return (false);
			array[open_brack_index++] = s[index];
		}
		else
		{
			--open_brack_index;
			if (open_brack_index < 0)
				return (false);
			if (!(checkMatch(array[open_brack_index], s[index])))
				return (false);
		}
	}
	if (open_brack_index != 0)
		return (false);
	return (true);
}

int	main(void)
{
	printf("%d", isValid("()"));
}