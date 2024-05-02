/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:11:22 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 21:11:23 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// swap on stack first element with second element
static void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->prev = first->prev;
	first->prev = second;
	second->next = first;
	if (first->next != NULL)
		first->next->prev = first;
	*stack = second;
}

void	sa(t_list **a_stack)
{
	swap(a_stack);
	write(1, "sa\n", 3);
}

void	sb(t_list **b_stack)
{
	swap(b_stack);
	write(1, "sb\n", 3);
}

void	ss(t_list **a_stack, t_list **b_stack)
{
	swap(a_stack);
	swap(b_stack);
	write(1, "ss\n", 3);
}
