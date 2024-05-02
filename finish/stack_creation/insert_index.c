/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:53:16 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 20:53:18 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insert_index(t_list *a_stack, int listsize)
{
	int		index;
	int		lowest_value;
	t_list	*ptr;
	t_list	*lowest_ptr;

	index = 1;
	while (index <= listsize)
	{
		lowest_value = INT_MAX;
		ptr = a_stack;
		lowest_ptr = NULL;
		while (ptr)
		{
			if (ptr->index == 0 && ptr->nbr <= lowest_value)
			{
				lowest_ptr = ptr;
				lowest_value = ptr->nbr;
			}
			ptr = ptr->next;
		}
		if (lowest_ptr != NULL)
			lowest_ptr->index = index;
		index++;
	}
}
