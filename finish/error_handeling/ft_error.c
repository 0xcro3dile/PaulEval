/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:53:58 by amohame2          #+#    #+#             */
/*   Updated: 2024/05/02 17:56:26 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *error_msg)
{
	if (error_msg == NULL)
		write(2, "Error\n", 6);
	else
	{
		write(2, error_msg, ft_strlen(error_msg));
		write(2, "\n", 1);
	}
	exit(1);
}
