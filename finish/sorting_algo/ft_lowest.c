/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:49:24 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 20:49:26 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	big_sort(t_list **a, t_list **b, int size)
{
	int		range;
	int		i;

	range = ft_sqrt(size) * 14 / 10;
	i = 0;
	while ((*a))
	{
		if ((*a)->index <= i)
		{
			(pb(a, b), rb(b));
			i++;
		}
		else if ((*a)->index <= (i + range))
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

int	ft_count_rot(t_list *b, int size)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = b;
	if (!ptr)
		return (0);
	while (i != size && ptr)
	{
		if (ptr->index == size)
			return (i);
		ptr = ptr->next;
		i++;
	}
	return (i);
}

// Could've also just done: count_revrot = size - count_rot;

static int	ft_count_revrot(t_list *b, int size)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = b;
	if (!ptr)
		return (0);
	while (ptr->next)
		ptr = ptr->next;
	while (i < size)
	{
		if (ptr->index == size)
			return (i);
		ptr = ptr->prev;
		i++;
	}
	return (i);
}

void	big_sort_back(t_list **a, t_list **b, int size)
{
	int		count_rot;
	int		count_revrot;

	while (size > 0)
	{
		count_rot = ft_count_rot(*b, size);
		count_revrot = ft_count_revrot(*b, size);
		if (count_rot <= count_revrot)
		{
			while ((*b)->index != size)
				rb(b);
			pa(a, b);
			size--;
		}
		else
		{
			while ((*b)->index != size)
				rrb(b);
			pa(a, b);
			size--;
		}
	}
}
