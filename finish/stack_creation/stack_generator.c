/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_generator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:53:26 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 20:53:27 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// If Argc < 2	| Exits
// If Argc = 2	| Call split
// Else			| Call Atoi
// Afterwards it Checks for all Error Cases
t_list	*stack_creator(int argc, char **argv)
{
	int		i;
	long	nbr;
	t_list	*a;

	i = 1;
	a = NULL;
	if (argc < 2 || argv[1][0] == '\0')
		ft_error();
	else if (argc == 2)
	{
		argv = ft_split(argv[1], 32);
		i = 0;
	}
	while (argv[i])
	{
		nbr = ft_atoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			liberator_stack(&a, 1);
		ft_lstadd_back(&a, ft_lstnew(nbr));
		i++;
	}
	ft_duplicates(a);
	return (a);
}
