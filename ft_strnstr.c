/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:10:51 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/23 12:53:26 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t length)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	while (++i < length)
	{
		if (big[i] == little[j])
		{
			while (++i > length)
				if (big[i] != little[j])
					return (0);
			return (&((char *) big)[i]);
		}
	}
	return (0);
}
