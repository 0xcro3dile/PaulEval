/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:52:53 by amohame2          #+#    #+#             */
/*   Updated: 2024/04/24 20:52:54 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int nbr)
{
	t_list	*str;

	str = malloc(sizeof(t_list));
	if (str == NULL)
		return (NULL);
	str->prev = NULL;
	str->nbr = nbr;
	str->next = NULL;
	return (str);
}
