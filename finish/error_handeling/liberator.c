/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liberator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:54:03 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 21:01:38 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// This function free's everything
// and calls the function ft_error
// which exits the program
void	liberator_stack(t_list **stack, int error)
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = *stack;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	ptr = NULL;
	tmp = NULL;
	*stack = NULL;
	if (error == 1)
		ft_error();
}
