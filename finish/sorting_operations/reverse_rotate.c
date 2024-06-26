/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:50:11 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 21:11:31 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shifts down all elements by 1
// Last element becomes First
static void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = first;
	while (last->next)
		last = last->next;
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	*stack = last;
}

void	rra(t_list **a_stack)
{
	reverse_rotate(a_stack);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b_stack)
{
	reverse_rotate(b_stack);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a_stack, t_list **b_stack)
{
	reverse_rotate(a_stack);
	reverse_rotate(b_stack);
	write(1, "rrr\n", 4);
}
