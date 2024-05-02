/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:49:52 by amohame2          #+#    #+#             */
/*   Updated: 2024/05/02 19:16:57 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_highest(t_list *a)
{
	t_list	*ptr;
	int		nbr;

	ptr = a;
	nbr = ptr->index;
	while (ptr)
	{
		if (ptr->index > nbr)
			nbr = ptr->index;
		ptr = ptr->next;
	}
	return (nbr);
}

static int	ft_lowest(t_list *a)
{
	t_list	*ptr;
	int		nbr;

	ptr = a;
	nbr = ptr->index;
	while (ptr)
	{
		if (ptr->index < nbr)
			nbr = ptr->index;
		ptr = ptr->next;
	}
	return (nbr);
}

void	small_sort(t_list **a)
{
	int	highest;
	int	lowest;

	if (sort_check(*a) == 1)
		return ;
	highest = ft_highest(*a);
	lowest = ft_lowest(*a);
	if ((*a)->index == highest)
	{
		if ((*a)->next->index == lowest)
			ra(a);
		else
			(ra(a), sa(a));
	}
	else if ((*a)->index == lowest)
		(rra(a), sa(a));
	else
	{
		if ((*a)->next->index == lowest)
			sa(a);
		else
			rra(a);
	}
}
