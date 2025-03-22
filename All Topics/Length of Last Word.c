#include <stdlib.h>

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strchr(char *s, char c)
{
	c = (unsigned char)c;
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}


int	lengthOfLastWord(char *s)
{
	int		strlen;
	int		is_char;
	int		word_len;
	char	*end_ptr;

	is_char = 0;
	word_len = 0;
	strlen = ft_strlen(s);
	end_ptr = ft_strchr(s, '\0');
	while (strlen--)
	{
		--end_ptr;
		if (is_char == 1 && !ft_isalpha(*end_ptr))
			return (word_len);
		else if (ft_isalpha(*end_ptr))
		{
			is_char = 1;
			word_len++;
		}
	}
	return (word_len);
}
