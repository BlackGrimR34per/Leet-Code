/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search Insert Position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:57:41 by yosherau          #+#    #+#             */
/*   Updated: 2025/05/25 21:01:35 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	recursiveFind(int start, int end, int target, int *nums)
{
	int	median_index;

	median_index = (start + end) / 2;
	if (nums[median_index] == target)
		return (median_index);
	else if (start > end)
		return (start);
	else if (nums[median_index] > target)
		return (recursiveFind(start, median_index - 1, target, nums));
	else if (nums[median_index] < target)
		return (recursiveFind(median_index + 1, end, target, nums));
	else
		return (0);
}

int	searchInsert(int *nums, int numsSize, int target)
{
	return (recursiveFind(0, numsSize - 1, target, nums));
}
