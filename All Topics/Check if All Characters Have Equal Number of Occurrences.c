/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check if All Characters Have Equal Number o        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:39:08 by yosherau          #+#    #+#             */
/*   Updated: 2025/05/18 18:05:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <string.h>

bool	check_occurences(int *arr, char *s)
{
	int	base_count;

	base_count = arr[*s - 97];
	while (*s)
	{
		if (base_count != arr[*s++ - 97])
			return (false);
	}
	return (true);
}

void	init_arr(int *arr, char *s)
{
	while (*s)
		arr[*s++ - 97]++;
}

bool	areOccurrencesEqual(char *s)
{
	int	arr[26];

	bzero(arr, sizeof(arr));
	init_arr(arr, s);
	return (check_occurences(arr, s));
}
