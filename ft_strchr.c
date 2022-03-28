/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:33 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/28 14:08:20 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	size_t	i;

	printf("\nSEARCHING '%c' INTO \"%s\"...\n", searchedChar, string);
	i = -1;
	if (!string)
	{
		printf("RETURNING NULL (EMPTY STRING)\n");
		return (NULL);
	}
	while (string[++i])
	{
		printf("\tTEST '%c' == '%c'\n", string[i] - 256, searchedChar);
		if (string[i] == searchedChar || string[i] - 256 == searchedChar)
		{
			printf("RETURNING '%c' (string[%zu])\n", string[i], i);
			return (&((char *) string)[i]);
		}
	}
	if (string[i] == searchedChar)
	{
		return (&((char *) string)[i]);
		printf("RETURNING '%c' (string[%zu])\n", string[i], i);
	}
	printf("RETURNING NULL\n");
	return (NULL);
}
