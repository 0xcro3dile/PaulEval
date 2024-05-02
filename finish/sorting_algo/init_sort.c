/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:49:38 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 21:03:19 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Depending on number of Arguments it will start:
// 2 arg = just swap
// 3 arg = small_sort
// 8 or less arg = medium_sort
// else big_sort & big_sort_back
void	init_sort(t_list **a, t_list **b, int size)
{
	if (size == 2)
		sa(a);
	else if (size == 3)
		small_sort(a);
	else if (size <= 8)
		medium_sort(a, b, size);
	else
	{
		big_sort(a, b, size);
		big_sort_back(a, b, size);
	}
}
