#include <stdbool.h>

bool	isValid(char *s)
{
	int	index;
	int	paranthesis;
	int	square_bracket;
	int	curly_bracket;

	index = -1;
	paranthesis = 0;
	square_bracket = 0;
	curly_bracket = 0;
	while (s[++index])
	{
		if (s[index] == '(')
			paranthesis++;
		else if (s[index] == '[')
			square_bracket++;
		else if (s[index] == '{')
			curly_bracket++;
		else if (s[index] == ')')
			paranthesis--;
		else if (s[index] == ']')
			square_bracket--;
		else if (s[index] == '}')
			curly_bracket--;
	}
	if (square_bracket == 0 && paranthesis == 0 && curly_bracket == 0)
		return (true);
	return (false);
}