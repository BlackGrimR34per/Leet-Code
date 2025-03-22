#include <stdbool.h>
#include <stdlib.h>

int	ft_nbr_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(long nbr)
{
	char	*str;
	int		len;
	long		temp_nbr;

	len = ft_nbr_len(nbr);
	temp_nbr = nbr;
	if (temp_nbr < 0)
		temp_nbr *= -1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len--] = '\0';
	while (temp_nbr != 0)
	{
		str[len--] = (temp_nbr % 10) + 48;
		temp_nbr /= 10;
	}
	if (nbr < 0)
		str[len] = '-';
	return (str);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}


bool isPalindrome(int x)
{
	char	*str;
	int		len;
	int		index;

	str = ft_itoa(x);
	len = ft_strlen(str);
	index = 0;
	while (index < len / 2)
	{
		if (str[index] != str[len - index - 1])
			return (false);
		index++;
	}
	return (true);
}

// Solution online
// bool isPalindrome(int x)
// {
// 	double rev=0;
// 	double rem;
// 	double original;

// 	original = x;
// 	while(x > 0)
// 	{
// 		rem = x % 10;
// 		rev = rev * 10 + rem;
// 		x /= 10;
// 	}
// 	if(rev == original)
// 		return true;
// 	else
// 		return false;
// }