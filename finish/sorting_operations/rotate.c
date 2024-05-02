/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:50:16 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 20:50:17 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shifts up all elements by 1
// First element becomes Last
static void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last = first;
	while (last->next)
		last = last->next;
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	ra(t_list **a_stack)
{
	rotate(a_stack);
	write(1, "ra\n", 3);
}

void	rb(t_list **b_stack)
{
	rotate(b_stack);
	write(1, "rb\n", 3);
}

void	rr(t_list **a_stack, t_list **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
	write(1, "rr\n", 3);
}
