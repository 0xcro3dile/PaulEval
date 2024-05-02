/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:50:04 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 20:50:05 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// First element of SRC goes ontop of DEST
static void	push(t_list **dest, t_list **src)
{
	t_list	*tmp;

	if (*src == NULL)
		return ;
	tmp = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	tmp->prev = NULL;
	if (*dest == NULL)
	{
		*dest = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *dest;
		tmp->next->prev = tmp;
		*dest = tmp;
	}
}

// First element of B goes ontop of A
void	pa(t_list **a_stack, t_list **b_stack)
{
	push(a_stack, b_stack);
	write(1, "pa\n", 3);
}

// First element of A goes ontop of B
void	pb(t_list **a_stack, t_list **b_stack)
{
	push(b_stack, a_stack);
	write(1, "pb\n", 3);
}
