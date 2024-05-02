/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicates.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:53:54 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 20:53:54 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Check if duplicates are in the Stack
// if True, it calls for liberation and exits
void	ft_duplicates(t_list *a)
{
	t_list	*ptr;

	while (a)
	{
		ptr = a->next;
		while (ptr)
		{
			if (a->nbr == ptr->nbr)
				liberator_stack(&a, 1);
			ptr = ptr->next;
		}
		a = a->next;
	}
}
