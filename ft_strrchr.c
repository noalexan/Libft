/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:52:44 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/24 10:31:33 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	size_t	i;

	if (!string)
		return (NULL);
	i = ft_strlen(string) + 1;
	while (--i >= 1)
		if (string[i] == searchedChar)
			return (&((char *) string)[i]);
	if (string[i] == searchedChar)
		return (&((char *) string)[i]);
	return (NULL);
}
