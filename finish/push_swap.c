/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:56:21 by amohame2          #+#    #+#             */
/*   Updated: 2024/05/02 17:52:00 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc == 1)
		exit(1);
	a = stack_creator(argc, argv);
	if (sort_check(a) == 1)
		return (1);
	size = ft_lstsize(a);
	insert_index(a, size);
	init_sort(&a, &b, size);
	liberator_stack(&a, 0);
	return (0);
}
