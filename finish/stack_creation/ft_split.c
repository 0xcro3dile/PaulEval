/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:53:04 by amohame2          #+#    #+#             */
/*   Updated: 2024/05/02 19:18:33 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	strlen_deli(char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static size_t	c_occurences(char *s, char c)
{
	size_t	occurences;
	int		in_word;

	in_word = 0;
	occurences = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
			in_word = 1;
		else if (*s == c && in_word == 1)
		{
			occurences++;
			in_word = 0;
		}
		s++;
	}
	if (in_word == 1)
		occurences++;
	return (occurences);
}

static char	**liberator(char **splitted_s, size_t counter)
{
	while (counter > 0)
	{
		free(splitted_s[--counter]);
	}
	free(splitted_s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted_s;
	size_t	s_len;
	size_t	counter;

	counter = 0;
	splitted_s = malloc(sizeof(char *) * (c_occurences((char *)s, c) + 1));
	if (splitted_s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		s_len = strlen_deli((char *)s, c);
		splitted_s[counter] = malloc(sizeof(char) * s_len + 1);
		if (splitted_s[counter] == NULL)
			return (liberator(splitted_s, counter));
		ft_strlcpy(splitted_s[counter], s, s_len + 1);
		counter++;
		s += s_len;
	}
	splitted_s[counter] = NULL;
	return (splitted_s);
}
